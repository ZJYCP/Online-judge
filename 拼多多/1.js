/***
 * js写并查集
 */


function main() {

    var pre = []
    var node = []

    var lineNum = parseInt(readline())

    for (var i = 0; i < lineNum; i++) {
        pre[i] = []
        var lines = readline().split(' ');
        for (let j = 0; j < lineNum; j++) {
            pre[i][j] = lines[j]
        }
    }

    for (var i = 0; i < lineNum; i++) {
        node[i] = i
    }


    for (var i = 0; i < lineNum; i++) {
        for (var j = i; j < lineNum; j++) {
            if (pre[i][j] >= 3) {
                unite(i, j);
            }
        }
    }

    var obj = {}
    var count = 0
    for (var i = 0; i < lineNum; i++) {
        if (!obj[find(i)]) {
            obj[node[i]] = 1
            count += 1
        }
    }

    function find(x) {
        if (node[x] == x) {
            return x
        }
        node[x] = find(node[x])
        return node[x]
    }

    function unite(x, y) {
        var fx = find(x)
        var fy = find(y)
        node[fx] = fy;

    }

    console.log(count)

}
main()
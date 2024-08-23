/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function(matrix) {
    const length = matrix.length
    for(let i =0 ; i<length;i++){
        for(let j=i  ;j<length;j++){
            [matrix[i][j],matrix[j][i]] = [matrix[j][i],matrix[i][j]]
        }

    }
    for(let i =0 ;i<length ; i++){
        matrix[i].reverse()
    }
};
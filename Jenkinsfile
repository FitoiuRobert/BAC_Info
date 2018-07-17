pipeline{
  agent any
  stages{
    stage('build'){
      steps{
        sh '''
          echo $(git --version) > git_version.txt
          cat git_version.txt
        '''
      }
    }
  }
}


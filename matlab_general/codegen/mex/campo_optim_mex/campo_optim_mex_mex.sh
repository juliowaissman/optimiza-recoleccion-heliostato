MATLAB="/Applications/MATLAB_R2014a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/juliowaissman/.matlab/R2014a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for campo_optim_mex" > campo_optim_mex_mex.mki
echo "CC=$CC" >> campo_optim_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> campo_optim_mex_mex.mki
echo "CLIBS=$CLIBS" >> campo_optim_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> campo_optim_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> campo_optim_mex_mex.mki
echo "CXX=$CXX" >> campo_optim_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> campo_optim_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> campo_optim_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> campo_optim_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> campo_optim_mex_mex.mki
echo "LD=$LD" >> campo_optim_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> campo_optim_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> campo_optim_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> campo_optim_mex_mex.mki
echo "Arch=$Arch" >> campo_optim_mex_mex.mki
echo OMPFLAGS= >> campo_optim_mex_mex.mki
echo OMPLINKFLAGS= >> campo_optim_mex_mex.mki
echo "EMC_COMPILER=Xcode with Clang" >> campo_optim_mex_mex.mki
echo "EMC_CONFIG=optim" >> campo_optim_mex_mex.mki
"/Applications/MATLAB_R2014a.app/bin/maci64/gmake" -B -f campo_optim_mex_mex.mk

git submodule update --init
mkdir build_emscripten
cd build_emscripten
../emscripten/emconfigure cmake ..
../emscripten/emmake make
mv assimp2json assimp2json.so
../emscripten/emcc assimp2json.so -o assimp2json.js --embed-file ../samples@



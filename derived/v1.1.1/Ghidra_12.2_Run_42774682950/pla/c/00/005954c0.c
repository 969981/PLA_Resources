/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005954c0; name: FUN_005954c0
 */


undefined8 FUN_005954c0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *__ptr;
  void *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  void *local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = FUN_002e4780(param_1,"grpc.default_authority");
  if (lVar1 == 0) {
                    /* try { // try from 005954ec to 005954fb has its CatchHandler @ 005955c4 */
    FUN_002e4780(param_1,"grpc.server_uri");
                    /* try { // try from 005954fc to 005954ff has its CatchHandler @ 005955c0 */
    lVar1 = FUN_002e4de0();
    if (lVar1 == 0) {
                    /* try { // try from 00595564 to 005955b3 has its CatchHandler @ 005955c0 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/authority.cc"
                   ,0x22,2,"assertion failed: %s","server_uri_str != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 00595504 to 0059550b has its CatchHandler @ 005955bc */
    FUN_0050cac8(&local_60);
    __ptr = local_60;
    if (local_60 == (void *)0x0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/authority.cc"
                   ,0x25,2,"assertion failed: %s","default_authority != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 00595514 to 00595527 has its CatchHandler @ 005955b4 */
    FUN_002e5130(&local_60,"grpc.default_authority",local_60);
    uVar2 = 1;
    uStack_38 = uStack_58;
    local_40 = local_60;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
  }
  else {
    __ptr = (void *)0x0;
    uVar2 = 0;
  }
                    /* try { // try from 00595534 to 0059553f has its CatchHandler @ 005955d4 */
  uVar2 = FUN_002e4250(param_1,&local_40,uVar2);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 00595548 to 0059554f has its CatchHandler @ 005955d0 */
    free(__ptr);
  }
  return uVar2;
}



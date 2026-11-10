/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bfae0; name: FUN_002bfae0
 */


void FUN_002bfae0(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long *local_30;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  local_28[0] = param_2 != 0;
  plVar2 = *(long **)(param_1 + 0x50);
  local_30 = plVar2;
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_30,local_28);
  if (local_30 != plVar2) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"ignored == ops",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/callback_common.h",0xd3);
  }
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x40);
    local_24[0] = local_28[0];
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 002bfb94 to 002bfb97 has its CatchHandler @ 002bfb98 */
      FUN_002ba2a0();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 002bfb48 with catch @ 002bfb98
                       catch(type#1 @ 00000000) { ... } // from try @ 002bfb94 with catch @ 002bfb98
                        */
      __cxa_begin_catch();
      __cxa_end_catch();
      return;
    }
                    /* try { // try from 002bfb48 to 002bfb4f has its CatchHandler @ 002bfb98 */
    (**(code **)(*plVar2 + 0x30))(plVar2,local_24);
  }
  return;
}



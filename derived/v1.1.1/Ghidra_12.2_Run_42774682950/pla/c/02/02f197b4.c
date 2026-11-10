/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f197b4; name: FUN_02f197b4
 */


undefined1 (*) [12] FUN_02f197b4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [12];
  long local_48;
  
  local_48 = 0;
  auVar2 = FUN_02e966f8(DAT_0440a148,param_3,&local_48);
  pauVar1 = (undefined1 (*) [12])0x0;
  if (auVar2._0_8_ != 0) {
    pauVar1 = (undefined1 (*) [12])FUN_02f19858(param_1,param_2);
    if (pauVar1 == (undefined1 (*) [12])0x0) {
      FUN_02e968c8(DAT_0440a148,param_3);
      pauVar1 = (undefined1 (*) [12])0x0;
      if (local_48 != 0) {
        FUN_02e8e5e0(local_48,0);
        pauVar1 = (undefined1 (*) [12])0x0;
      }
    }
    else {
      *pauVar1 = auVar2;
      *(undefined4 *)pauVar1[1] = param_3;
      *(long *)(pauVar1[1] + 4) = local_48;
    }
  }
  return pauVar1;
}



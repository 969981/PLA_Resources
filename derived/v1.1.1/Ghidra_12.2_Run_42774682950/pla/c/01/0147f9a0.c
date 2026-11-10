/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f9a0; name: FUN_0147f9a0
 */


void FUN_0147f9a0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  uVar1 = *(ulong *)(param_1 + 0x5b0);
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 0xf) != 0) {
      FUN_00d73864(param_1);
      uVar1 = *(ulong *)(param_1 + 0x5b0);
    }
    if ((param_2 & 1) != 0) {
      *(ulong *)(param_1 + 0x5b0) = uVar1 & 0xfffffffffffffff0;
      *(undefined1 **)(param_1 + 0x5b8) = &DAT_cbf29ce484222645;
      FUN_00d42690(param_1,0,1);
      return;
    }
    *(ulong *)(param_1 + 0x5b0) = uVar1 | 9;
    local_40 = 0x4a0f571a28d293b4;
    pcStack_38 = "anime_close";
    local_30 = 0xb;
    local_28 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}



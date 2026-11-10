/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01931540; name: FUN_01931540
 */


undefined8 FUN_01931540(uint *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_e0 [40];
  long *local_b8;
  long *local_98;
  long *local_78;
  long *local_58;
  long *local_38;
  
  if (*param_1 != 0) {
    lVar2 = (ulong)*param_1 << 2;
    do {
      param_1 = param_1 + 1;
      FUN_019348d4(auStack_e0,(long)param_1 + (ulong)*param_1);
      uVar1 = FUN_0165ff30(auStack_e0);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + -4;
    } while (lVar2 != 0);
  }
  return 1;
}



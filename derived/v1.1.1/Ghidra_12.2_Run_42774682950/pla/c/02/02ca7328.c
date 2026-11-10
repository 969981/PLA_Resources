/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ca7328; name: FUN_02ca7328
 */


undefined8 FUN_02ca7328(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long *local_28;
  
  FUN_00befc74(&local_28);
  lVar1 = param_1 + 0x160;
  lVar4 = *(long *)(param_1 + 0x160);
  if (lVar4 != 0) {
    puVar5 = (ulong *)PTR_DAT_04379c88;
    if (local_28 != (long *)0x0) {
      puVar5 = (ulong *)(local_28 + 0xb);
    }
    uVar3 = *puVar5;
    lVar6 = lVar1;
    do {
      puVar5 = (ulong *)PTR_DAT_04379c88;
      if (*(long *)(lVar4 + 0x20) != 0) {
        puVar5 = (ulong *)(*(long *)(lVar4 + 0x20) + 0x58);
      }
      if (*puVar5 >= uVar3) {
        lVar6 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)(*puVar5 < uVar3) * 8);
    } while (lVar4 != 0);
    if (lVar6 != lVar1) {
      if (*(long *)(lVar6 + 0x20) == 0) {
        puVar5 = (ulong *)PTR_DAT_04379c88;
      }
      else {
        puVar5 = (ulong *)(*(long *)(lVar6 + 0x20) + 0x58);
      }
      if (*puVar5 <= uVar3) goto LAB_02ca73bc;
    }
  }
  lVar6 = lVar1;
LAB_02ca73bc:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar6 == lVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
  }
  return uVar2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00690214; name: FUN_00690214
 */


void FUN_00690214(long param_1)

{
  ulong *puVar1;
  long lVar2;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (puVar1 == (ulong *)0x0) {
      FUN_0069dd74(*(undefined8 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    break;
  case 2:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      FUN_00694140(lVar2);
LAB_006902b4:
      FUN_002e2ea0(PTR_LAB_04373088,lVar2);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    break;
  case 3:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      FUN_00694824(lVar2);
      goto LAB_006902b4;
    }
    break;
  case 4:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (puVar1 == (ulong *)0x0) {
      FUN_0069de00(*(undefined8 *)(param_1 + 0x10));
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



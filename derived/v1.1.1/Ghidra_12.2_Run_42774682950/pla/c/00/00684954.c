/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00684954; name: FUN_00684954
 */


void FUN_00684954(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  
  if (param_2 == param_1) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = uVar1 & 1;
  puVar3 = (ulong *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((puVar3 == (ulong *)0x0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
    FUN_0069b910(lVar4);
    FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    uVar1 = *(ulong *)(param_1 + 8);
    uVar2 = uVar1 & 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (uVar2 != 0) {
    uVar1 = uVar1 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar1 + 8) & 1) == 0) {
      *(undefined2 *)(uVar1 + 8) = 0;
    }
    else {
      **(undefined1 **)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x10) = 0;
    }
  }
  FUN_0068480c(param_1,param_2);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119f840; name: FUN_0119f840
 */


void FUN_0119f840(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x6d8) == 1) {
    lVar3 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab918);
    lVar3 = *(long *)(lVar3 + 0x8b0);
    piVar1 = (int *)(lVar3 + 0x20);
    if (*(int *)(lVar3 + 0x28) != 0) {
      piVar1 = (int *)(lVar3 + 0x24);
    }
    uVar4 = (ulong)(uint)(*(int *)(lVar3 + 0x14) + *piVar1 * *(int *)(lVar3 + 0x10));
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + uVar4 * 0x10);
    iVar2 = FUN_00d48aa4(uVar5,0);
    if (iVar2 == 0x15) {
      FUN_00d48a90(uVar5);
      FUN_0119c444(param_1,1,uVar4);
      return;
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278734; name: FUN_00278734
 */


void FUN_00278734(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *(ulong *)(param_1 + 0xd0) = (ulong)*(uint *)(param_2 + 4);
  lVar7 = *(long *)(param_1 + 0x40);
  uVar4 = FUN_00876bbc(param_2 + (ulong)*(uint *)(param_2 + 0x14));
  *(undefined8 *)(param_1 + 0x4b0) = uVar4;
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = (lVar5 - lVar7) + *(long *)(param_1 + 0x28);
  }
  FUN_0087c958(lVar5,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18),lVar6,uVar4);
  FUN_0027a950(param_1 + 0x4c0,*(undefined8 *)(param_1 + 0x10),param_1 + 0x450,lVar5,
               *(undefined1 *)(param_1 + 8));
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
    piVar3 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    while (piVar3 != (int *)0x0) {
      if (*piVar3 == 0x43535247) {
        *(undefined8 *)(param_1 + 0xd8) = 0;
        if (piVar3 == (int *)0x0) {
          return;
        }
        *(ulong *)(param_1 + 0xd8) = (ulong)(uint)piVar3[1];
        uVar4 = FUN_00876bbc((long)piVar3 + (ulong)(uint)piVar3[5]);
        *(undefined8 *)(param_1 + 0x4f8) = uVar4;
        lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
        if (*(long *)(param_1 + 0x18) == 0) {
          lVar7 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          lVar7 = (lVar5 - lVar7) + *(long *)(param_1 + 0x28);
        }
        FUN_0087c958(lVar5,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18),lVar7,uVar4);
        FUN_0027adb0(param_1 + 0x508,*(undefined8 *)(param_1 + 0x10),param_1 + 0x450,lVar5);
        return;
      }
      puVar1 = (uint *)(piVar3 + 3);
      piVar2 = (int *)((long)piVar3 + (ulong)*puVar1);
      piVar3 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar3 = piVar2;
      }
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028489c4; name: FUN_028489c4
 */


void FUN_028489c4(long param_1,ulong param_2)

{
  ushort uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  
  lVar6 = *(long *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar7 = (ulong)uVar3;
  fVar8 = 1.0;
  if ((param_2 & 1) == 0) {
    fVar8 = 0.0;
  }
  if (((uVar3 < *(uint *)(lVar6 + 0x278)) &&
      (lVar4 = *(long *)(lVar6 + 600), *(char *)(lVar4 + uVar7 * 0x48 + 8) != '\0')) &&
     (*(char *)(lVar4 + uVar7 * 0x48 + 0xb) == '\0')) {
    plVar2 = *(long **)(lVar4 + uVar7 * 0x48 + 0x10);
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)(lVar4 + uVar7 * 0x48 + 0xb) = 1;
      (**(code **)(*plVar2 + 0x20))(plVar2,1);
      lVar4 = *(long *)(lVar6 + 600);
    }
    *(undefined1 *)(lVar4 + uVar7 * 0x48 + 0xc) = 1;
    if ((uVar3 < *(uint *)(lVar6 + 0x278)) &&
       (*(char *)(*(long *)(lVar6 + 600) + uVar7 * 0x48 + 8) != '\0')) {
      FUN_00227728(*(undefined8 *)(*(long *)(lVar6 + 600) + uVar7 * 0x48 + 0x10));
      *(undefined4 *)(*(long *)(*(long *)(lVar6 + 600) + uVar7 * 0x48 + 0x10) + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x671) = 1;
    }
  }
  lVar6 = *(long *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar5 = *(uint *)(lVar6 + 0x278);
  if ((uVar3 < uVar5) && (*(char *)(*(long *)(lVar6 + 600) + (ulong)uVar3 * 0x48 + 8) != '\0')) {
    *(undefined1 *)(*(long *)(lVar6 + 600) + (ulong)uVar3 * 0x48 + 9) = 0;
    lVar6 = *(long *)(param_1 + 0x70);
    uVar3 = *(uint *)(param_1 + 0x78);
    uVar5 = *(uint *)(lVar6 + 0x278);
  }
  if ((uVar3 < uVar5) && (*(char *)(*(long *)(lVar6 + 600) + (ulong)uVar3 * 0x48 + 8) != '\0')) {
    uVar7 = (ulong)uVar3;
    uVar1 = FUN_00227728(*(undefined8 *)(*(long *)(lVar6 + 600) + uVar7 * 0x48 + 0x10));
    if ((float)uVar1 < fVar8) {
      uVar1 = FUN_00227728(*(undefined8 *)(*(long *)(lVar6 + 600) + uVar7 * 0x48 + 0x10));
      fVar8 = (float)uVar1;
    }
    *(float *)(*(long *)(*(long *)(lVar6 + 600) + uVar7 * 0x48 + 0x10) + 0x20) = fVar8;
    *(undefined1 *)(lVar6 + 0x671) = 1;
  }
  return;
}



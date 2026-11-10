/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028487c0; name: FUN_028487c0
 */


void FUN_028487c0(long param_1,undefined8 *param_2)

{
  short sVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  undefined4 local_24;
  
  local_24 = 0;
  if (*(char *)(param_1 + 0x68) == '\0') {
    uVar3 = FUN_02848634(param_1,*param_2,&local_24);
    if ((uVar3 & 1) == 0) goto LAB_028488fc;
    FUN_02c2e33c(*(undefined8 *)(param_1 + 0x58),local_24,*(undefined8 *)(param_1 + 0x60));
  }
  lVar4 = FUN_02c43784(*(undefined8 *)(param_1 + 0x70),"T_name_00");
  if (lVar4 != 0) {
    FUN_010c3bd0(lVar4,*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x58),0,10,0);
  }
  lVar4 = *(long *)(param_1 + 0x70);
  uVar6 = *(uint *)(param_1 + 0x78);
  uVar3 = (ulong)uVar6;
  if (((uVar6 < *(uint *)(lVar4 + 0x278)) &&
      (lVar7 = *(long *)(lVar4 + 600), *(char *)(lVar7 + uVar3 * 0x48 + 8) != '\0')) &&
     (*(char *)(lVar7 + uVar3 * 0x48 + 0xb) == '\0')) {
    plVar5 = *(long **)(lVar7 + uVar3 * 0x48 + 0x10);
    if (plVar5 != (long *)0x0) {
      *(undefined1 *)(lVar7 + uVar3 * 0x48 + 0xb) = 1;
      (**(code **)(*plVar5 + 0x20))(plVar5,1);
      lVar7 = *(long *)(lVar4 + 600);
    }
    *(undefined1 *)(lVar7 + uVar3 * 0x48 + 0xc) = 1;
    if ((uVar6 < *(uint *)(lVar4 + 0x278)) &&
       (*(char *)(*(long *)(lVar4 + 600) + uVar3 * 0x48 + 8) != '\0')) {
      FUN_00227728(*(undefined8 *)(*(long *)(lVar4 + 600) + uVar3 * 0x48 + 0x10));
      *(undefined4 *)(*(long *)(*(long *)(lVar4 + 600) + uVar3 * 0x48 + 0x10) + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x671) = 1;
    }
  }
  lVar4 = *(long *)(param_1 + 0x70);
  uVar6 = *(uint *)(param_1 + 0x78);
  uVar8 = *(uint *)(lVar4 + 0x278);
  if ((uVar6 < uVar8) && (*(char *)(*(long *)(lVar4 + 600) + (ulong)uVar6 * 0x48 + 8) != '\0')) {
    *(undefined1 *)(*(long *)(lVar4 + 600) + (ulong)uVar6 * 0x48 + 9) = 0;
    lVar4 = *(long *)(param_1 + 0x70);
    uVar6 = *(uint *)(param_1 + 0x78);
    uVar8 = *(uint *)(lVar4 + 0x278);
  }
  if ((uVar6 < uVar8) && (*(char *)(*(long *)(lVar4 + 600) + (ulong)uVar6 * 0x48 + 8) != '\0')) {
    uVar3 = (ulong)uVar6;
    sVar1 = FUN_00227728(*(undefined8 *)(*(long *)(lVar4 + 600) + uVar3 * 0x48 + 0x10));
    if (sVar1 == 0) {
      uVar2 = FUN_00227728(*(undefined8 *)(*(long *)(lVar4 + 600) + uVar3 * 0x48 + 0x10));
      fVar9 = (float)uVar2;
    }
    else {
      fVar9 = 1.0;
    }
    *(float *)(*(long *)(*(long *)(lVar4 + 600) + uVar3 * 0x48 + 0x10) + 0x20) = fVar9;
    *(undefined1 *)(lVar4 + 0x671) = 1;
  }
LAB_028488fc:
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}



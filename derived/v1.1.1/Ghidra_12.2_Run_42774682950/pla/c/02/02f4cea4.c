/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4cea4; name: FUN_02f4cea4
 */


void FUN_02f4cea4(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  char cVar10;
  char local_34 [4];
  
  sVar5 = *(short *)(param_1 + 0x2a);
  if (sVar5 < 2) {
    if (sVar5 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      return;
    }
    uVar6 = (ulong)*(uint *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
    if (*(uint *)(param_1 + 0x18) == 0) {
      return;
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + uVar6 * 0x18 + -0x18);
    local_34[0] = '\x01';
    while( true ) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      if ((*(uint *)(plVar8 + 6) & 0xfffffffd) == 0) goto LAB_02f4cf20;
      lVar7 = *(long *)(param_1 + 0x10) + uVar6 * 0x18;
      sVar5 = *(short *)(lVar7 + -0x10);
      if (sVar5 == 0) goto LAB_02f4cf20;
      if (1 < sVar5) break;
      plVar8 = (long *)plVar8[1];
      if ((*(long **)(lVar7 + -8) != (long *)0x0) &&
         ((*(uint *)(*(long *)(lVar7 + -0x18) + 0x30) | 2) != 3)) {
        (**(code **)(**(long **)(lVar7 + -8) + 0x10))();
      }
      *(undefined8 *)(lVar7 + -8) = 0;
      uVar1 = *(int *)(param_1 + 0x18) - 1;
      uVar6 = (ulong)uVar1;
      *(uint *)(param_1 + 0x18) = uVar1;
    }
    *(short *)(lVar7 + -0x10) = sVar5 + -1;
LAB_02f4cf20:
    do {
      uVar6 = FUN_02f4cad0(param_1,*(long *)(param_1 + 0x10) +
                                   (ulong)*(uint *)(param_1 + 0x18) * 0x18 + -0x18,local_34);
      cVar10 = local_34[0];
      if (local_34[0] == '\0') {
        plVar8 = *(long **)(plVar8[4] + (uVar6 & 0xffff) * 8);
        uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
        plVar9 = plVar8;
        if ((uVar6 & 1) != 0) goto LAB_02f4cf9c;
        if (((int)plVar8[5] == 0) || (*(char *)((long)plVar8 + 0x36) == '\0')) {
          plVar8 = (long *)plVar8[1];
        }
        else {
          iVar4 = FUN_02f4c45c(param_1,plVar8);
          if (iVar4 != 1) {
            FUN_02f4c804(param_1);
            return;
          }
        }
        cVar10 = '\x01';
        local_34[0] = '\x01';
      }
      else {
        lVar7 = *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18;
        plVar8 = (long *)plVar8[1];
        if ((*(long **)(lVar7 + -8) != (long *)0x0) &&
           ((*(uint *)(*(long *)(lVar7 + -0x18) + 0x30) | 2) != 3)) {
          (**(code **)(**(long **)(lVar7 + -8) + 0x10))();
        }
        *(undefined8 *)(lVar7 + -8) = 0;
        uVar1 = *(int *)(param_1 + 0x18) - 1;
        *(uint *)(param_1 + 0x18) = uVar1;
        while( true ) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          if ((*(uint *)(plVar8 + 6) & 0xfffffffd) == 0) goto joined_r0x02f4d1a8;
          lVar7 = *(long *)(param_1 + 0x10) + (ulong)uVar1 * 0x18;
          sVar5 = *(short *)(lVar7 + -0x10);
          if (sVar5 == 0) goto joined_r0x02f4d1a8;
          if (1 < sVar5) break;
          plVar8 = (long *)plVar8[1];
          if ((*(long **)(lVar7 + -8) != (long *)0x0) &&
             ((*(uint *)(*(long *)(lVar7 + -0x18) + 0x30) | 2) != 3)) {
            (**(code **)(**(long **)(lVar7 + -8) + 0x10))();
          }
          *(undefined8 *)(lVar7 + -8) = 0;
          uVar1 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar1;
        }
        *(short *)(lVar7 + -0x10) = sVar5 + -1;
      }
joined_r0x02f4d1a8:
      plVar9 = plVar8;
      if ((cVar10 == '\0') || (plVar9 = (long *)0x0, plVar8 == (long *)0x0)) goto LAB_02f4cf9c;
    } while( true );
  }
  sVar5 = sVar5 + -1;
LAB_02f4cfdc:
  *(short *)(param_1 + 0x2a) = sVar5;
  return;
LAB_02f4cf9c:
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar7 = plVar9[4];
  *(int *)(param_1 + 0x20) = (int)lVar7;
  *(bool *)(param_1 + 0x28) = (int)lVar7 != 0;
  *(int *)(param_1 + 0x24) = (int)plVar9[2];
  sVar5 = *(short *)((long)plVar9 + 0x14);
  if (sVar5 == 0) {
    sVar5 = 0;
  }
  else if ((short)plVar9[3] != 0 || *(short *)((long)plVar9 + 0x16) != 0) {
    iVar4 = (int)*(short *)((long)plVar9 + 0x16) + (int)sVar5;
    iVar2 = (int)(short)iVar4;
    iVar3 = (int)(short)((short)plVar9[3] + sVar5);
    if (iVar4 < 1) {
      iVar2 = 1;
    }
    if (iVar2 != iVar3) {
      DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
      iVar4 = (iVar3 - iVar2) + 1;
      sVar5 = 0;
      if (iVar4 != 0) {
        sVar5 = (short)((int)(uint)((ulong)DAT_0440a190 >> 0x21) / iVar4);
      }
      sVar5 = ((short)((ulong)DAT_0440a190 >> 0x21) - sVar5 * (short)iVar4) + (short)iVar2;
    }
  }
  goto LAB_02f4cfdc;
}



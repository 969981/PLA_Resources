/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d053c; name: FUN_031d053c
 */


void FUN_031d053c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined4 *puVar13;
  long lVar14;
  int local_b0 [2];
  undefined4 local_a8 [2];
  undefined4 *local_a0;
  undefined8 uStack_98;
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  long *local_68;
  
  lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0xf0);
  if (*(char *)(lVar10 + 0x30) != '\x01') {
    FUN_02898b44(lVar10 + 0x20);
  }
  FUN_033299e0(0x2f968a11);
  iVar1 = *(int *)(DAT_04434dc8 + 0x18);
  lVar2 = tpidr_el0;
  if (0 < iVar1) {
    FUN_031530a8(&local_68,*(undefined4 *)(DAT_04434dc8 + 0x20),
                 *(undefined4 *)(*(long *)(lVar10 + 0x20) + 0x180),0);
    lVar14 = *(long *)(lVar2 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar14;
    }
    local_a0 = (undefined4 *)0x0;
    uVar3 = local_68._0_4_;
    if ((*(long *)(lVar14 + 0x10) != 0) &&
       (FUN_032d5c74(*(long *)(lVar14 + 0x10),&DAT_038f7b98,&local_a0,&DAT_04356710,4,4),
       local_a0 != (undefined4 *)0x0)) {
      *local_a0 = uVar3;
    }
  }
  iVar4 = (int)param_5[1];
  if (iVar4 != 0) {
    if (iVar1 < 1) {
      puVar13 = (undefined4 *)(*param_5 + 4);
      lVar14 = (long)iVar4 * 0xc;
      do {
        if (*(long *)(lVar2 + 0x38d490) == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar11;
          lVar11 = *(long *)(lVar11 + 0x10);
        }
        else {
          lVar11 = *(long *)(*(long *)(lVar2 + 0x38d490) + 0x10);
        }
        if (lVar11 != 0) {
          FUN_032d5af0(lVar11,"TtupdateOneFace",0xf);
        }
        local_78[0] = *puVar13;
        FUN_031d0c10(param_2,lVar10,local_78);
        FUN_033299e0(0x6610a465);
        switch(*(undefined1 *)(puVar13 + -1)) {
        case 0:
          FUN_031d0cb4(lVar10,param_3 + (long)(int)puVar13[1] * 0x58);
          break;
        case 1:
          local_80[0] = *puVar13;
          FUN_031d1a24(lVar10,local_80);
          break;
        case 2:
          local_88[0] = *puVar13;
          FUN_031d1c50(&local_a0,lVar10,local_88,0);
          break;
        case 3:
          break;
        default:
          goto switchD_031d0680_default;
        }
        FUN_031cdd40(param_2 + 0xb8,puVar13);
        FUN_033299e0(0xf07550c9);
        if (lVar11 != 0) {
          FUN_032d5b34(lVar11,&DAT_0390f40e);
        }
        lVar14 = lVar14 + -0xc;
        puVar13 = puVar13 + 3;
      } while (lVar14 != 0);
    }
    else {
      puVar13 = (undefined4 *)(*param_5 + 4);
      lVar14 = (long)iVar4 * 0xc;
      do {
        if (*(long *)(lVar2 + 0x38d490) == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar11;
          lVar11 = *(long *)(lVar11 + 0x10);
        }
        else {
          lVar11 = *(long *)(*(long *)(lVar2 + 0x38d490) + 0x10);
        }
        if (lVar11 != 0) {
          FUN_032d5af0(lVar11,"TtupdateOneFace",0xf);
        }
        local_78[0] = *puVar13;
        FUN_031d0c10(param_2,lVar10,local_78);
        FUN_033299e0(0x6610a465);
        switch(*(undefined1 *)(puVar13 + -1)) {
        case 0:
          FUN_031d0cb4(lVar10,param_3 + (long)(int)puVar13[1] * 0x58);
          break;
        case 1:
          local_80[0] = *puVar13;
          FUN_031d1a24(lVar10,local_80);
          break;
        case 2:
          local_88[0] = *puVar13;
          FUN_031d1c50(&local_a0,lVar10,local_88,0);
          break;
        case 3:
          break;
        default:
switchD_031d0680_default:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        FUN_031cdd40(param_2 + 0xb8,puVar13);
        FUN_033299e0(0xf07550c9);
        local_a8[0] = *puVar13;
        FUN_03193814(lVar10,local_a8,&local_a0);
        lVar5 = *(long *)(lVar2 + 0x38d490);
        if (lVar5 == 0) {
          lVar5 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar5;
        }
        local_68 = (long *)0x0;
        FUN_032d5c74(*(undefined8 *)(lVar5 + 0x10),&DAT_038f7b98,&local_68,&DAT_04356378,0xc,4);
        if (local_68 != (long *)0x0) {
          *local_68 = (long)local_a0;
          *(int *)(local_68 + 1) = (int)uStack_98;
        }
        if (lVar11 != 0) {
          FUN_032d5b34(lVar11,&DAT_0390f40e);
        }
        lVar14 = lVar14 + -0xc;
        puVar13 = puVar13 + 3;
      } while (lVar14 != 0);
    }
  }
  if ((int)param_5[3] != 0) {
    piVar12 = (int *)param_5[2];
    lVar14 = (long)(int)param_5[3] << 4;
    do {
      if (*(long *)(lVar2 + 0x38d490) == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar11;
        lVar11 = *(long *)(lVar11 + 0x10);
      }
      else {
        lVar11 = *(long *)(*(long *)(lVar2 + 0x38d490) + 0x10);
      }
      if (lVar11 != 0) {
        FUN_032d5af0(lVar11,"TtupdateOneEdge",0xf);
      }
      switch((char)piVar12[3]) {
      case '\0':
        FUN_031d213c(lVar10,piVar12);
        break;
      case '\x01':
        FUN_031d22e8(param_2,lVar10,piVar12);
        break;
      case '\x02':
        FUN_031d2670(param_1,param_2,lVar10,piVar12);
        break;
      case '\x03':
        FUN_031d2aa0(param_1,param_2,lVar10,piVar12);
        break;
      default:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_033299e0(0xcd5cf5d7);
      if (0 < iVar1) {
        lVar5 = *(long *)(lVar10 + 0x20);
        iVar4 = *piVar12;
        if (iVar4 < *(int *)(lVar5 + 0x20)) {
          lVar9 = *(long *)(lVar5 + 0x18);
          iVar8 = iVar4;
          if (*(int *)(lVar5 + 0x98) != 0) {
            iVar8 = *(int *)(*(long *)(lVar5 + 0x90) + (long)iVar4 * 4);
          }
          if (iVar8 != -1) {
            plVar6 = (long *)(lVar5 + 0xb0);
            iVar4 = iVar8;
            goto LAB_031d0894;
          }
        }
        else {
          plVar6 = (long *)(lVar5 + 0xd0);
          iVar4 = iVar4 - *(int *)(lVar5 + 0x20);
LAB_031d0894:
          lVar9 = *plVar6;
        }
        piVar7 = (int *)(lVar9 + (long)iVar4 * 0x10);
        if (0 < *(short *)((long)piVar7 + 10)) {
          piVar7 = piVar7 + 1;
        }
        local_b0[0] = *piVar7 + (uint)*(ushort *)(piVar12 + 2);
        FUN_03195eb0(lVar10,local_b0,&local_a0);
        lVar5 = *(long *)(lVar2 + 0x38d490);
        if (lVar5 == 0) {
          lVar5 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar5;
        }
        local_68 = (long *)0x0;
        FUN_032d5c74(*(undefined8 *)(lVar5 + 0x10),&DAT_038f7b98,&local_68,&DAT_04356378,0xc,4);
        if (local_68 != (long *)0x0) {
          *local_68 = (long)local_a0;
          *(int *)(local_68 + 1) = (int)uStack_98;
        }
      }
      if (lVar11 != 0) {
        FUN_032d5b34(lVar11,&DAT_0390f40e);
      }
      piVar12 = piVar12 + 4;
      lVar14 = lVar14 + -0x10;
    } while (lVar14 != 0);
  }
  return;
}



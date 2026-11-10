/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00176070; name: FUN_00176070
 */


void FUN_00176070(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong local_90;
  undefined1 auStack_88 [40];
  
  lVar10 = *(long *)(param_1 + 0x10);
  do {
    plVar6 = (long *)(lVar10 + -0x20);
    if ((*(uint *)(lVar10 + -0x18) & 0xf) - 3 < 2) {
      uVar2 = *(uint *)(lVar10 + -8);
      plVar7 = (long *)(lVar10 + -0x10);
      if ((uVar2 & 0xf) != 4) {
        if ((uVar2 & 0xf) != 3) goto LAB_001761f0;
        FUN_00162a50(param_1,plVar7);
        uVar2 = *(uint *)(lVar10 + -8);
      }
      if ((uVar2 == 0x44) && (*(char *)(*plVar7 + 0xb) == '\0')) {
        if ((*(uint *)(lVar10 + -0x18) & 0xf) == 3) {
          FUN_00162a50(param_1,plVar6);
        }
        goto LAB_00176208;
      }
      if ((*(int *)(lVar10 + -0x18) == 0x44) && (*(char *)(*plVar6 + 0xb) == '\0')) {
        iVar11 = 2;
        *plVar6 = *plVar7;
        *(undefined8 *)(lVar10 + -0x18) = *(undefined8 *)(lVar10 + -8);
      }
      else {
        lVar3 = *plVar7;
        if (*(char *)(lVar3 + 8) == '\x04') {
          uVar8 = (ulong)*(byte *)(lVar3 + 0xb);
        }
        else {
          uVar8 = *(ulong *)(lVar3 + 0x10);
        }
        if ((int)param_2 < 2) {
          local_90 = 1;
        }
        else {
          local_90 = 1;
          uVar2 = *(uint *)(lVar10 + -0x18) & 0xf;
          if (uVar2 != 4) goto LAB_0017626c;
LAB_00176280:
          do {
            lVar3 = *plVar6;
            if (*(char *)(lVar3 + 8) == '\x04') {
              uVar12 = (ulong)*(byte *)(lVar3 + 0xb);
              if (0x7fffffffffffffff - uVar8 <= uVar12) {
LAB_00176378:
                    /* WARNING: Subroutine does not return */
                FUN_001599d0(param_1,"string length overflow");
              }
            }
            else {
              uVar12 = *(ulong *)(lVar3 + 0x10);
              if (0x7fffffffffffffff - uVar8 <= uVar12) goto LAB_00176378;
            }
            local_90 = local_90 + 1;
            uVar8 = uVar12 + uVar8;
            plVar7 = plVar6 + -2;
            if (param_2 == local_90) goto joined_r0x001762a8;
            uVar2 = *(uint *)(plVar6 + -1) & 0xf;
            plVar6 = plVar7;
          } while (uVar2 == 4);
LAB_0017626c:
          if (uVar2 == 3) {
            FUN_00162a50(param_1,plVar6);
            goto LAB_00176280;
          }
        }
joined_r0x001762a8:
        iVar11 = (int)local_90;
        if (uVar8 < 0x29) {
          plVar6 = (long *)(lVar10 + (local_90 & 0xffffffff) * -0x10);
          lVar3 = 0;
          uVar12 = local_90 & 0xffffffff;
          lVar5 = *plVar6;
          if (*(char *)(lVar5 + 8) == '\x04') goto LAB_00176308;
          do {
            sVar9 = *(size_t *)(lVar5 + 0x10);
            while( true ) {
              memcpy(auStack_88 + lVar3,(void *)(lVar5 + 0x18),sVar9);
              uVar12 = uVar12 - 1;
              lVar3 = sVar9 + lVar3;
              plVar6 = plVar6 + 2;
              if ((long)uVar12 < 1) {
                lVar3 = FUN_0016d720(param_1,auStack_88,uVar8);
                goto LAB_001760ac;
              }
              lVar5 = *plVar6;
              if (*(char *)(lVar5 + 8) != '\x04') break;
LAB_00176308:
              sVar9 = (size_t)*(byte *)(lVar5 + 0xb);
            }
          } while( true );
        }
        lVar3 = FUN_0016d8f0(param_1,uVar8);
        plVar6 = (long *)(lVar10 + (local_90 & 0xffffffff) * -0x10);
        lVar5 = 0;
        uVar8 = local_90 & 0xffffffff;
        lVar4 = *plVar6;
        cVar1 = *(char *)(lVar4 + 8);
        while( true ) {
          if (cVar1 == '\x04') {
            sVar9 = (size_t)*(byte *)(lVar4 + 0xb);
          }
          else {
            sVar9 = *(size_t *)(lVar4 + 0x10);
          }
          memcpy((void *)(lVar3 + 0x18 + lVar5),(void *)(lVar4 + 0x18),sVar9);
          uVar8 = uVar8 - 1;
          lVar5 = sVar9 + lVar5;
          plVar6 = plVar6 + 2;
          if ((long)uVar8 < 1) break;
          lVar4 = *plVar6;
          cVar1 = *(char *)(lVar4 + 8);
        }
LAB_001760ac:
        local_90 = local_90 & 0xffffffff;
        plVar6 = (long *)(lVar10 + local_90 * -0x10);
        *plVar6 = lVar3;
        *(uint *)(plVar6 + 1) = *(byte *)(lVar3 + 8) | 0x40;
      }
    }
    else {
LAB_001761f0:
      FUN_00173ca0(param_1,plVar6,lVar10 + -0x10,plVar6,0x16);
LAB_00176208:
      iVar11 = 2;
    }
    param_2 = param_2 - (iVar11 + -1);
    lVar10 = *(long *)(param_1 + 0x10) + (long)(iVar11 + -1) * -0x10;
    *(long *)(param_1 + 0x10) = lVar10;
    if ((int)param_2 < 2) {
      return;
    }
  } while( true );
}



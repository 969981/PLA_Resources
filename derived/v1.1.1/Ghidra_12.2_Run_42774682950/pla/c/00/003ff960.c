/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ff960; name: FUN_003ff960
 */


ulong FUN_003ff960(int *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  time_t tVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  size_t __n;
  int *local_28;
  
  local_28 = (int *)0x0;
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
      (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
    param_1[0x19e] = 1;
    iVar4 = FUN_004e4880(param_1,0x12,0x80,*(undefined8 *)(param_2 + 0x288),0,0);
    if ((iVar4 == 0) ||
       (iVar4 = FUN_004e4880(param_1,0x19,0x80,*(undefined8 *)(param_2 + 0x288),0,0), iVar4 == 0)) {
      puVar11 = &DAT_ffffffff;
      goto LAB_003ffb0c;
    }
    bVar3 = false;
    piVar6 = *(int **)(param_1 + 0x142);
joined_r0x003ffa70:
    local_28 = piVar6;
    if (piVar6 == (int *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      if (((*piVar6 == *param_1) &&
          (__n = *(size_t *)(piVar6 + 0x5e), __n == *(size_t *)(param_1 + 0x138))) &&
         (iVar4 = memcmp(piVar6 + 0x60,param_1 + 0x13a,__n), iVar4 == 0)) {
        if ((__n == 0) && ((param_1[0x156] & 1U) != 0)) {
          uVar8 = 0x50;
          uVar9 = 0x115;
          uVar10 = 0x25e;
LAB_003ffb44:
          FUN_004c99a0(param_1,uVar8,0xd9,uVar9,"external/openssl/ssl/ssl_sess.c",uVar10);
          puVar11 = &DAT_ffffffff;
          goto joined_r0x003ffa48;
        }
        lVar12 = *(long *)(piVar6 + 0x78);
        tVar7 = time((time_t *)0x0);
        if (tVar7 - *(long *)(local_28 + 0x7a) <= lVar12) {
          if ((*(byte *)(local_28 + 0xa8) & 1) == 0) {
            if (((uint)**(undefined8 **)(param_1 + 0x2a) >> 9 & 1) != 0) goto LAB_003ffac0;
          }
          else if (((uint)**(undefined8 **)(param_1 + 0x2a) >> 9 & 1) == 0) {
            uVar8 = 0x2f;
            uVar9 = 0x68;
            uVar10 = 0x271;
            goto LAB_003ffb44;
          }
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) ||
              (iVar4 = **(int **)(param_1 + 2), iVar4 < 0x304)) || (iVar4 == 0x10000)) {
            FUN_003fef10(*(undefined8 *)(param_1 + 0x142));
            *(int **)(param_1 + 0x142) = local_28;
          }
          piVar6 = (int *)(*(long *)(param_1 + 0x1ca) + 0x94);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          puVar11 = (undefined1 *)0x1;
          *(undefined8 *)(param_1 + 0x16a) = *(undefined8 *)(*(long *)(param_1 + 0x142) + 0x1d0);
          goto LAB_003ffb0c;
        }
        piVar6 = (int *)(*(long *)(param_1 + 0x1ca) + 0x8c);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (bVar3) {
          bVar3 = true;
          FUN_003ffc60(*(undefined8 *)(param_1 + 0x1ca),local_28,1);
          puVar11 = (undefined1 *)0x0;
          goto joined_r0x003ffa48;
        }
      }
LAB_003ffac0:
      puVar11 = (undefined1 *)0x0;
    }
  }
  else {
    uVar5 = FUN_004ddf10(param_1,param_2,&local_28);
    if (uVar5 - 2 < 2) {
      if (*(long *)(param_2 + 0x28) == 0) goto LAB_003ffa80;
      piVar6 = (int *)FUN_003ff560(param_1,param_2 + 0x30);
      bVar3 = true;
      goto joined_r0x003ffa70;
    }
    if (1 < uVar5) {
LAB_003ffa80:
      bVar3 = false;
      piVar6 = local_28;
      goto joined_r0x003ffa70;
    }
    FUN_004c99a0(param_1,0x50,0xd9,0x44,"external/openssl/ssl/ssl_sess.c",0x22f);
    bVar3 = false;
    puVar11 = &DAT_ffffffff;
  }
joined_r0x003ffa48:
  if (local_28 != (int *)0x0) {
    FUN_003fef10();
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
        (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
      param_1[0x142] = 0;
      param_1[0x143] = 0;
    }
    if (!bVar3) {
      param_1[0x19e] = 1;
    }
  }
LAB_003ffb0c:
  return (ulong)puVar11 & 0xffffffff;
}



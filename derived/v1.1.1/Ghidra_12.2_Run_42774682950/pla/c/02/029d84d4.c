/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d84d4; name: FUN_029d84d4
 */


void FUN_029d84d4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  char local_68 [4];
  char local_64 [4];
  
  plVar6 = (long *)param_3[2];
  if ((*(char *)((long)plVar6 + 0x5a) != '\0') &&
     ((*(char *)((long)plVar6 + 0x5b) != '\x01' || (*plVar6 != *param_3)))) {
    *(undefined1 *)((long)plVar6 + 0x5c) = 0;
    lVar7 = param_3[2];
    bVar3 = *(byte *)(lVar7 + 0x5c);
    if (bVar3 < *(byte *)(lVar7 + 0x5a)) {
      *(byte *)(lVar7 + 0x5c) = bVar3 + 1;
      lVar7 = *(long *)(lVar7 + (ulong)bVar3 * 8);
      if (lVar7 != 0) {
LAB_029d8560:
        lVar9 = *param_3;
        lVar2 = param_3[1];
        local_64[0] = '\0';
        local_68[0] = '\0';
        uVar5 = FUN_0297e720(*(undefined8 *)(param_1 + 0x38),lVar9,lVar7,lVar2);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = FUN_0297eb68(*(undefined8 *)(param_1 + 0x38),lVar9,lVar7,lVar2,local_64,local_68
                                ), (uVar5 & 1) == 0)) {
          lVar9 = param_3[2];
          bVar3 = *(byte *)(lVar9 + 0x5a);
          uVar5 = (ulong)bVar3;
          bVar4 = *(byte *)(param_3[1] + 0x24);
          if (bVar3 != 0) {
            uVar8 = 0;
            do {
              if (*(long *)(lVar9 + uVar8 * 8) == lVar7) goto LAB_029d8600;
              uVar8 = uVar8 + 1;
            } while (uVar5 != uVar8);
          }
          goto joined_r0x029d8620;
        }
        goto LAB_029d86c4;
      }
    }
LAB_029d871c:
    if ((param_3[3] != 0) &&
       (((lVar7 = param_3[2], *(char *)(lVar7 + 0x5b) != '\0' || (*(char *)(lVar7 + 0x5d) != '\0'))
        && (*(char *)(lVar7 + 0x5a) == '\0')))) {
      uVar5 = (ulong)*(byte *)(*param_3 + 0x7d);
      lVar7 = *(long *)(param_1 + 0x20);
      if (uVar5 < 0x1e) {
        lVar9 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 0x128) + uVar5 * 4;
        *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 2;
      }
      FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x4f,uVar5,1);
    }
  }
  return;
LAB_029d8600:
  for (; (int)uVar8 + 1U < (uint)uVar5; uVar8 = uVar8 + 1) {
    puVar1 = (undefined8 *)(lVar9 + uVar8 * 8);
    *puVar1 = puVar1[1];
    uVar5 = (ulong)*(byte *)(lVar9 + 0x5a);
  }
  *(char *)(lVar9 + 0x5a) = (char)uVar5 + -1;
  *(char *)(lVar9 + 0x5c) = *(char *)(lVar9 + 0x5c) + -1;
joined_r0x029d8620:
  if (bVar3 < 2 || (bVar4 & 8) == 0) {
    lVar9 = *(long *)(param_1 + 0x20);
    if (local_68[0] == '\0') {
      if (local_64[0] == '\0') {
        FUN_02a3fa08(*(undefined8 *)(lVar9 + 0x18),0x9d,0x49,*(undefined1 *)(lVar7 + 0x7d),
                     0xffff0000);
      }
      else {
        bVar3 = *(byte *)(lVar7 + 0x7d);
        if (bVar3 < 6) {
          lVar7 = 0;
        }
        else if (bVar3 < 0xc) {
          lVar7 = 2;
        }
        else if (bVar3 < 0x12) {
          lVar7 = 1;
        }
        else if (bVar3 < 0x18) {
          lVar7 = 3;
        }
        else {
          lVar7 = (ulong)(bVar3 < 0x1e) << 2;
        }
        FUN_02a3fa08(*(undefined8 *)(lVar9 + 0x18),0x9c,0x2d5,bVar3,lVar7,0xffff0000);
        FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x96,bVar3,0);
      }
    }
    else {
      FUN_02a3aec4(lVar9,*param_3,lVar7);
    }
  }
  FUN_0297f7bc(*(undefined8 *)(param_1 + 0x38),*param_3,(char)param_3[4]);
LAB_029d86c4:
  lVar7 = param_3[2];
  bVar3 = *(byte *)(lVar7 + 0x5c);
  if (*(byte *)(lVar7 + 0x5a) <= bVar3) goto LAB_029d871c;
  *(byte *)(lVar7 + 0x5c) = bVar3 + 1;
  lVar7 = *(long *)(lVar7 + (ulong)bVar3 * 8);
  if (lVar7 == 0) goto LAB_029d871c;
  goto LAB_029d8560;
}



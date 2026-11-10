/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a0a620; name: FUN_02a0a620
 */


undefined4 FUN_02a0a620(long param_1,undefined4 param_2,void *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  short *psVar8;
  ulong uVar9;
  uint local_2c;
  undefined1 *local_28;
  
  **(undefined8 **)(*(long *)(param_1 + 0x5e0) + 0x10) = 0;
  local_28 = (undefined1 *)0x0;
  local_2c = 0;
  switch(param_2) {
  case 1:
    lVar4 = *(long *)(param_1 + 0x5c0);
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x20) + 0xb0);
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      lVar6 = *(long *)(*(long *)(lVar4 + 0x20) + 0x78);
      psVar8 = (short *)(lVar6 + 8);
      uVar9 = uVar5;
      do {
        if (*psVar8 != 0 && *psVar8 == *(short *)(param_1 + 0x78)) {
          if (psVar8 != (short *)&DAT_00000008) {
            puVar7 = (undefined1 *)(lVar6 + 0x10);
            goto LAB_02a0a7d4;
          }
          break;
        }
        psVar8 = psVar8 + 0x1394;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    break;
  case 2:
    lVar4 = *(long *)(param_1 + 0x5c0);
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x20) + 0xb0);
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      lVar6 = *(long *)(*(long *)(lVar4 + 0x20) + 0x78);
      psVar8 = (short *)(lVar6 + 8);
      uVar9 = uVar5;
      do {
        if (*psVar8 != 0 && *psVar8 == *(short *)(param_1 + 0x78)) {
          if (psVar8 != (short *)&DAT_00000008) {
            puVar7 = (undefined1 *)(lVar6 + 0x10);
            goto LAB_02a0a804;
          }
          break;
        }
        psVar8 = psVar8 + 0x1394;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    goto LAB_02a0a8cc;
  case 3:
    lVar4 = *(long *)(param_1 + 0x5c0);
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x20) + 0xb0);
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      lVar6 = *(long *)(*(long *)(lVar4 + 0x20) + 0x78);
      psVar8 = (short *)(lVar6 + 8);
      uVar9 = uVar5;
      do {
        if (*psVar8 != 0 && *psVar8 == *(short *)(param_1 + 0x78)) {
          if (psVar8 != (short *)&DAT_00000008) {
            puVar7 = (undefined1 *)(lVar6 + 0x10);
            goto LAB_02a0a834;
          }
          break;
        }
        psVar8 = psVar8 + 0x1394;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    goto LAB_02a0a8dc;
  case 4:
    lVar4 = *(long *)(param_1 + 0x5c0);
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x20) + 0xb0);
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      lVar6 = *(long *)(*(long *)(lVar4 + 0x20) + 0x78);
      psVar8 = (short *)(lVar6 + 8);
      uVar9 = uVar5;
      do {
        if (*psVar8 != 0 && *psVar8 == *(short *)(param_1 + 0x78)) {
          if (psVar8 != (short *)&DAT_00000008) {
            puVar7 = (undefined1 *)(lVar6 + 0x10);
            goto LAB_02a0a864;
          }
          break;
        }
        psVar8 = psVar8 + 0x1394;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    goto LAB_02a0a8f8;
  case 5:
    lVar4 = *(long *)(param_1 + 0x5c0);
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x20) + 0xb0);
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      lVar6 = *(long *)(*(long *)(lVar4 + 0x20) + 0x78);
      psVar8 = (short *)(lVar6 + 8);
      uVar9 = uVar5;
      do {
        if (*psVar8 != 0 && *psVar8 == *(short *)(param_1 + 0x78)) {
          if (psVar8 != (short *)&DAT_00000008) {
            puVar7 = (undefined1 *)(lVar6 + 0x10);
            goto LAB_02a0a894;
          }
          break;
        }
        psVar8 = psVar8 + 0x1394;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    goto LAB_02a0a924;
  default:
    goto switchD_02a0a66c_default;
  }
  goto LAB_02a0a8bc;
  while( true ) {
    puVar7 = puVar7 + 0x2728;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_02a0a894:
    if (*(short *)(puVar7 + -8) != 0 && *(short *)(puVar7 + -8) == *(short *)(param_1 + 0x78)) {
      if (puVar7 != &DAT_00000010) goto LAB_02a0a914;
      break;
    }
  }
LAB_02a0a924:
  uVar3 = 8;
  goto LAB_02a0a934;
  while( true ) {
    puVar7 = puVar7 + 0x2728;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_02a0a864:
    if (*(short *)(puVar7 + -8) != 0 && *(short *)(puVar7 + -8) == *(short *)(param_1 + 0x78)) {
      if (puVar7 != &DAT_00000010) goto LAB_02a0a914;
      break;
    }
  }
LAB_02a0a8f8:
  uVar3 = 7;
  goto LAB_02a0a934;
  while( true ) {
    puVar7 = puVar7 + 0x2728;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_02a0a834:
    if (*(short *)(puVar7 + -8) != 0 && *(short *)(puVar7 + -8) == *(short *)(param_1 + 0x78)) {
      if (puVar7 != &DAT_00000010) goto LAB_02a0a914;
      break;
    }
  }
LAB_02a0a8dc:
  uVar3 = 0xb;
  goto LAB_02a0a934;
  while( true ) {
    puVar7 = puVar7 + 0x2728;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_02a0a804:
    if (*(short *)(puVar7 + -8) != 0 && *(short *)(puVar7 + -8) == *(short *)(param_1 + 0x78)) {
      if (puVar7 != &DAT_00000010) goto LAB_02a0a914;
      break;
    }
  }
LAB_02a0a8cc:
  uVar3 = 10;
  goto LAB_02a0a934;
LAB_02a0a914:
  local_2c = (uint)*(ushort *)(puVar7 + -4);
  local_28 = puVar7;
  goto switchD_02a0a66c_default;
  while( true ) {
    puVar7 = puVar7 + 0x2728;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_02a0a7d4:
    if (*(short *)(puVar7 + -8) != 0 && *(short *)(puVar7 + -8) == *(short *)(param_1 + 0x78)) {
      if (puVar7 != &DAT_00000010) goto LAB_02a0a914;
      break;
    }
  }
LAB_02a0a8bc:
  uVar3 = 9;
LAB_02a0a934:
  FUN_02a12aa4(lVar4,&local_28,&local_2c,uVar3);
switchD_02a0a66c_default:
  if ((local_2c == param_4) && (iVar2 = memcmp(local_28,param_3,(ulong)param_4), iVar2 == 0)) {
    return 0;
  }
  return 1;
}



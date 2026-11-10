/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f24b0; name: FUN_002f24b0
 */


void FUN_002f24b0(long param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  char *pcVar7;
  bool bVar8;
  ulong uVar9;
  char cVar10;
  char *pcVar11;
  
  bVar8 = true;
  bVar5 = *(byte *)(param_1 + 0x2d);
  while( true ) {
    if (bVar5 == 0xff) {
      return;
    }
    lVar1 = param_1 + (ulong)bVar5 * 8;
    if (!bVar8) {
      uVar9 = *param_3;
      if (uVar9 == *param_4) {
        uVar2 = 8;
        if (0xf < uVar9 * 3) {
          uVar2 = uVar9 * 3 >> 1;
        }
        *param_4 = uVar2;
        lVar6 = FUN_002ebdc0(*param_2);
        *param_2 = lVar6;
        uVar9 = *param_3;
      }
      else {
        lVar6 = *param_2;
      }
      *param_3 = uVar9 + 1;
      *(undefined1 *)(lVar6 + uVar9) = 0x2c;
    }
    pcVar7 = (char *)FUN_002f1480(*(undefined8 *)(lVar1 + 0x38));
    cVar10 = *pcVar7;
    if (cVar10 != '\0') break;
LAB_002f24f8:
    bVar3 = *(byte *)(lVar1 + 0x40);
    bVar8 = false;
    bVar4 = bVar3 == 0xff;
    if (*(byte *)(param_1 + 0x2e) != bVar5) {
      bVar4 = bVar3 != 0xff;
    }
    bVar5 = bVar3;
    if (!bVar4) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x2b8,2,
                   "assertion failed: %s",
                   "err->last_err == slot ? lerr->next == UINT8_MAX : lerr->next != UINT8_MAX");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pcVar7 = pcVar7 + 1;
  uVar9 = *param_3;
  if (uVar9 != *param_4) goto LAB_002f25ec;
  do {
    uVar2 = 8;
    if (0xf < uVar9 * 3) {
      uVar2 = uVar9 * 3 >> 1;
    }
    *param_4 = uVar2;
    lVar6 = FUN_002ebdc0(*param_2);
    *param_2 = lVar6;
    uVar9 = *param_3;
    pcVar11 = pcVar7;
    while( true ) {
      *param_3 = uVar9 + 1;
      *(char *)(lVar6 + uVar9) = cVar10;
      pcVar7 = pcVar11 + 1;
      cVar10 = *pcVar11;
      if (cVar10 == '\0') goto LAB_002f24f8;
      uVar9 = *param_3;
      if (uVar9 == *param_4) break;
LAB_002f25ec:
      lVar6 = *param_2;
      pcVar11 = pcVar7;
    }
  } while( true );
}



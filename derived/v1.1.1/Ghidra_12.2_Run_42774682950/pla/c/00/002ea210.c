/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ea210; name: FUN_002ea210
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_002ea210(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  size_t sVar12;
  undefined8 local_90;
  size_t sStack_88;
  char *local_80;
  char local_70 [32];
  
  uVar5 = *(uint *)(param_2 + 4);
  uVar6 = *(uint *)(param_2 + 8);
  if ((int)uVar6 < 0) {
    uVar6 = 0xffffffff;
  }
  pvVar11 = (void *)((ulong)local_70 | 1);
  local_70[0] = '%';
  FUN_002e8f28(&local_90,param_2 + 1);
  if (((byte)local_90 & 1) == 0) {
    memcpy(pvVar11,(void *)((ulong)&local_90 | 1),(ulong)((byte)local_90 >> 1));
    sStack_88 = (ulong)((byte)local_90 >> 1);
  }
  else {
    if ((long)sStack_88 < 0) {
                    /* try { // try from 002ea584 to 002ea5a3 has its CatchHandler @ 002ea5c4 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    memcpy(pvVar11,local_80,sStack_88);
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  puVar3 = (undefined2 *)((long)pvVar11 + sStack_88);
  *(undefined1 *)(puVar3 + 1) = 0x2a;
  *puVar3 = 0x2e2a;
  uVar9 = 99;
  switch(*param_2) {
  case 0:
    break;
  case 1:
    uVar9 = 0x43;
    break;
  case 2:
    uVar9 = 0x73;
    break;
  case 3:
    uVar9 = 0x53;
    break;
  case 4:
    uVar9 = 100;
    break;
  case 5:
    uVar9 = 0x69;
    break;
  case 6:
    uVar9 = 0x6f;
    break;
  case 7:
    uVar9 = 0x75;
    break;
  case 8:
    uVar9 = 0x78;
    break;
  case 9:
    uVar9 = 0x58;
    break;
  case 10:
    uVar9 = 0x66;
    break;
  case 0xb:
    uVar9 = 0x46;
    break;
  case 0xc:
    uVar9 = 0x65;
    break;
  case 0xd:
    uVar9 = 0x45;
    break;
  case 0xe:
    uVar9 = 0x67;
    break;
  case 0xf:
    uVar9 = 0x47;
    break;
  case 0x10:
    uVar9 = 0x61;
    break;
  case 0x11:
    uVar9 = 0x41;
    break;
  case 0x12:
    uVar9 = 0x6e;
    break;
  case 0x13:
    uVar9 = 0x70;
    break;
  default:
    uVar9 = 0;
  }
  *(undefined1 *)((long)puVar3 + 3) = uVar9;
  *(char *)(puVar3 + 2) = '\0';
  if (local_70 + 0x20 <= puVar3 + 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("fp < fmt + sizeof(fmt)",
                  "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc",
                  0x26,"FallbackToSnprintf");
  }
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  pcVar8 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x210);
  sStack_88 = _UNK_03889cc8;
  local_90 = _DAT_03889cc0;
  local_80 = pcVar8;
  memset(pcVar8,0,0x201);
  iVar7 = snprintf(pcVar8,0x200,local_70,param_1,(ulong)uVar5,(ulong)uVar6);
  if (-1 < iVar7) {
    do {
      sVar12 = (size_t)iVar7;
      uVar4 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        uVar4 = sStack_88;
      }
      if (sVar12 < uVar4) {
        pcVar8 = (char *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          pcVar8 = local_80;
        }
        if (iVar7 != 0) {
          pvVar11 = (void *)param_3[3];
          param_3[2] = param_3[2] + sVar12;
          if (sVar12 < (ulong)((long)param_3 + (0x420 - (long)pvVar11))) {
            memcpy(pvVar11,pcVar8,sVar12);
            param_3[3] = param_3[3] + sVar12;
            uVar10 = 1;
            goto joined_r0x002ea520;
          }
          puVar2 = param_3 + 4;
          if ((long)pvVar11 - (long)puVar2 < 0) {
                    /* try { // try from 002ea5a4 to 002ea5c3 has its CatchHandler @ 002ea5c8 */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
                    /* try { // try from 002ea538 to 002ea553 has its CatchHandler @ 002ea5c8 */
          (*(code *)param_3[1])(*param_3,puVar2,(long)pvVar11 - (long)puVar2);
          param_3[3] = puVar2;
          (*(code *)param_3[1])(*param_3,pcVar8,sVar12);
        }
        uVar10 = 1;
        if ((local_90 & 1) == 0) {
          return 1;
        }
        goto LAB_002ea4a4;
      }
      uVar1 = sVar12 + 1;
      if (uVar4 < uVar1) {
                    /* try { // try from 002ea404 to 002ea40f has its CatchHandler @ 002ea5d8 */
        FUN_002e6bd4(&local_90,uVar1 - uVar4,0);
      }
      else if ((local_90 & 1) == 0) {
        local_70[sVar12 - 0x1e] = '\0';
        local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar1 << 1));
      }
      else {
        local_80[uVar1] = '\0';
        sStack_88 = uVar1;
      }
      pcVar8 = (char *)((ulong)&local_90 | 1);
      sVar12 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        pcVar8 = local_80;
        sVar12 = sStack_88;
      }
      iVar7 = snprintf(pcVar8,sVar12,local_70,param_1,(ulong)uVar5,(ulong)uVar6);
    } while (-1 < iVar7);
  }
  uVar10 = 0;
joined_r0x002ea520:
  if ((local_90 & 1) != 0) {
LAB_002ea4a4:
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  return uVar10;
}



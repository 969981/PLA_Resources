/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f7870; name: FUN_004f7870
 */


undefined * FUN_004f7870(uint *param_1,char *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  
  if (param_2 != (char *)0x0) {
    uVar1 = *param_1;
    uVar3 = uVar1 >> 5 & 1;
    lVar6 = 0;
    puVar5 = &DAT_041837c8;
    if ((uVar1 >> 3 & 1) == 0) {
      do {
        uVar2 = *(ushort *)((long)&DAT_041837e0 + lVar6);
        if (((uVar2 >> 3 & 1) == 0) &&
           ((((uVar1 >> 2 & 1) != 0 || ((uVar2 >> 2 & 1) == 0)) &&
            (((uVar2 >> 5 ^ 0xffff) & 1) != 0 || uVar3 != 0)))) {
          if ((((uVar1 & 1) != 0) &&
              (*(char **)((long)&PTR_s_no_ssl3_041837d8 + lVar6) != (char *)0x0)) &&
             (iVar4 = strcmp(*(char **)((long)&PTR_s_no_ssl3_041837d8 + lVar6),param_2), iVar4 == 0)
             ) {
            return puVar5;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)((long)&DAT_041837d0 + lVar6) != (char *)0x0))
             && (iVar4 = strcasecmp(*(char **)((long)&DAT_041837d0 + lVar6),param_2), iVar4 == 0)) {
            return &DAT_041837c8 + lVar6;
          }
        }
        lVar6 = lVar6 + 0x20;
        puVar5 = puVar5 + 0x20;
      } while (lVar6 != 0x600);
    }
    else if ((uVar1 >> 2 & 1) == 0) {
      do {
        if (((*(ushort *)((long)&DAT_041837e0 + lVar6) >> 2 & 1) == 0) &&
           (((*(ushort *)((long)&DAT_041837e0 + lVar6) >> 5 ^ 0xffff) & 1) != 0 || uVar3 != 0)) {
          if (((uVar1 & 1) != 0) &&
             ((*(char **)((long)&PTR_s_no_ssl3_041837d8 + lVar6) != (char *)0x0 &&
              (iVar4 = strcmp(*(char **)((long)&PTR_s_no_ssl3_041837d8 + lVar6),param_2), iVar4 == 0
              )))) {
            return &DAT_041837c8 + lVar6;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)((long)&DAT_041837d0 + lVar6) != (char *)0x0))
             && (iVar4 = strcasecmp(*(char **)((long)&DAT_041837d0 + lVar6),param_2), iVar4 == 0)) {
            return puVar5;
          }
        }
        lVar6 = lVar6 + 0x20;
        puVar5 = puVar5 + 0x20;
      } while (lVar6 != 0x600);
    }
    else {
      do {
        if (uVar3 != 0 || ((*(ushort *)((long)&DAT_041837e0 + lVar6) >> 5 ^ 0xffff) & 1) != 0) {
          if ((((uVar1 & 1) != 0) &&
              (*(char **)((long)&PTR_s_no_ssl3_041837d8 + lVar6) != (char *)0x0)) &&
             (iVar4 = strcmp(*(char **)((long)&PTR_s_no_ssl3_041837d8 + lVar6),param_2), iVar4 == 0)
             ) {
            return &DAT_041837c8 + lVar6;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)((long)&DAT_041837d0 + lVar6) != (char *)0x0))
             && (iVar4 = strcasecmp(*(char **)((long)&DAT_041837d0 + lVar6),param_2), iVar4 == 0)) {
            return puVar5;
          }
        }
        lVar6 = lVar6 + 0x20;
        puVar5 = puVar5 + 0x20;
      } while (lVar6 != 0x600);
    }
  }
  return (undefined *)0x0;
}



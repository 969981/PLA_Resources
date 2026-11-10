/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00440090; name: FUN_00440090
 */


bool FUN_00440090(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  
  if (param_3 == 0) {
    return true;
  }
  iVar6 = FUN_0040d2e0(param_3);
  pcVar2 = "";
  if (iVar6 != 0) {
    pcVar2 = "-";
  }
  iVar6 = FUN_004048a0(param_1,param_5,0x80);
  if (iVar6 == 0) {
    return false;
  }
  iVar6 = FUN_0040c130(param_3);
  if (iVar6 != 0) {
    iVar6 = FUN_00402590(param_1,"%s 0\n",param_2);
LAB_00440170:
    return 0 < iVar6;
  }
  iVar6 = FUN_0040c070(param_3);
  if (iVar6 < 0x21) {
    puVar8 = (undefined4 *)FUN_0042cce0(param_3);
    uVar5 = *puVar8;
    puVar8 = (undefined4 *)FUN_0042cce0(param_3);
    iVar6 = FUN_00402590(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pcVar2,uVar5,pcVar2,*puVar8);
    goto LAB_00440170;
  }
  iVar7 = FUN_0040c070(param_3);
  iVar6 = iVar7 + 0xe;
  if (-1 < iVar7 + 7) {
    iVar6 = iVar7 + 7;
  }
  lVar10 = (long)((iVar6 >> 3) + 1);
  puVar9 = (undefined1 *)FUN_00400260(lVar10,"external/openssl/crypto/asn1/t_pkey.c",0x49);
  if (puVar9 != (undefined1 *)0x0) {
    *puVar9 = 0;
    pcVar3 = " (Negative)";
    if (*pcVar2 != '-') {
      pcVar3 = "";
    }
    iVar6 = FUN_00402590(param_1,"%s%s\n",param_2,pcVar3);
    if (0 < iVar6) {
      iVar6 = FUN_0040caa0(param_3,puVar9 + 1);
      iVar6 = iVar6 + (uint)((byte)puVar9[1] >> 7);
      puVar1 = puVar9;
      if (-1 < (char)puVar9[1]) {
        puVar1 = puVar9 + 1;
      }
      if (iVar6 != 0) {
        uVar12 = 0;
        do {
          if (((uVar12 / 0xf) * 0xf == uVar12) &&
             (((uVar12 != 0 && (iVar7 = FUN_004044c0(param_1,&DAT_0396725e), iVar7 < 1)) ||
              (iVar7 = FUN_004048a0(param_1,param_5 + 4,0x80), iVar7 == 0)))) goto LAB_004402f4;
          puVar4 = &DAT_03996322;
          if ((long)iVar6 - 1U != uVar12) {
            puVar4 = &DAT_039b07fe;
          }
          iVar7 = FUN_00402590(param_1,"%02x%s",puVar1[uVar12],puVar4);
          if (iVar7 < 1) goto LAB_004402f4;
          uVar12 = uVar12 + 1;
        } while ((long)iVar6 != uVar12);
      }
      bVar11 = true;
      iVar6 = FUN_004042b0(param_1,&DAT_0396725e,1);
      if (0 < iVar6) goto LAB_004402f8;
    }
  }
LAB_004402f4:
  bVar11 = false;
LAB_004402f8:
  FUN_00400620(puVar9,lVar10,"external/openssl/crypto/asn1/t_pkey.c",0x5b);
  return bVar11;
}



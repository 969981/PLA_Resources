/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043ba40; name: FUN_0043ba40
 */


long FUN_0043ba40(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 local_38;
  
  local_38 = *param_2;
  puVar2 = (undefined4 *)FUN_0041d030(0,&local_38,param_3,&DAT_04165818);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004014b0(0x10,0x92,0x10,"external/openssl/crypto/ec/ec_asn1.c",899);
    return 0;
  }
  if (((param_1 == (long *)0x0) || (lVar7 = *param_1, lVar7 == 0)) &&
     (lVar7 = FUN_0042ccf0(), lVar7 == 0)) {
    uVar4 = 0x41;
    uVar5 = 0x389;
  }
  else {
    lVar3 = *(long *)(lVar7 + 0x18);
    if (*(long *)(puVar2 + 4) != 0) {
      FUN_0042dbc0();
      lVar3 = FUN_0043b7a0(*(undefined8 *)(puVar2 + 4));
      *(long *)(lVar7 + 0x18) = lVar3;
    }
    if (lVar3 == 0) {
      uVar5 = 0x395;
    }
    else {
      *(undefined4 *)(lVar7 + 0x10) = *puVar2;
      lVar3 = *(long *)(puVar2 + 2);
      if (lVar3 == 0) {
        uVar4 = 0x7d;
        uVar5 = 0x3a1;
        goto LAB_0043bbb4;
      }
      uVar4 = FUN_0040a6f0(lVar3);
      iVar1 = FUN_0040a6e0(lVar3);
      iVar1 = FUN_0042d740(lVar7,uVar4,(long)iVar1);
      if (iVar1 == 0) goto LAB_0043bbb8;
      FUN_0042dc90(*(undefined8 *)(lVar7 + 0x20));
      lVar3 = FUN_0042df90(*(undefined8 *)(lVar7 + 0x18));
      *(long *)(lVar7 + 0x20) = lVar3;
      if (lVar3 == 0) {
        uVar5 = 0x3a8;
      }
      else {
        if (*(long *)(puVar2 + 6) == 0) {
          pcVar6 = *(code **)(**(long **)(lVar7 + 0x18) + 0x168);
          if ((pcVar6 == (code *)0x0) || (iVar1 = (*pcVar6)(lVar7), iVar1 == 0)) goto LAB_0043bbb8;
          *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) | 2;
LAB_0043bc38:
          if (param_1 != (long *)0x0) {
            *param_1 = lVar7;
          }
          FUN_00421810(puVar2,&DAT_04165818);
          *param_2 = local_38;
          return lVar7;
        }
        uVar4 = FUN_0040a6f0();
        iVar1 = FUN_0040a6e0(*(undefined8 *)(puVar2 + 6));
        iVar1 = FUN_0042d610(lVar7,uVar4,(long)iVar1,0);
        if (iVar1 != 0) goto LAB_0043bc38;
        uVar5 = 0x3b3;
      }
    }
    uVar4 = 0x10;
  }
LAB_0043bbb4:
  FUN_004014b0(0x10,0x92,uVar4,"external/openssl/crypto/ec/ec_asn1.c",uVar5);
LAB_0043bbb8:
  if ((param_1 == (long *)0x0) || (*param_1 != lVar7)) {
    FUN_0042cd80(lVar7);
  }
  FUN_00421810(puVar2,&DAT_04165818);
  return 0;
}



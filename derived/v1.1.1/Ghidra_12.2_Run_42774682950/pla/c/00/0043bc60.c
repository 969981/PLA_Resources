/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043bc60; name: FUN_0043bc60
 */


int FUN_0043bc60(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = 0;
  if (((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
     (((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0 && (*(long *)(param_1 + 0x20) == 0)))) {
    FUN_004014b0(0x10,0xc0,0x43,"external/openssl/crypto/ec/ec_asn1.c",0x3d5);
    iVar1 = 0;
    uVar3 = 0;
    puVar2 = (undefined4 *)0x0;
    goto LAB_0043bdac;
  }
  puVar2 = (undefined4 *)FUN_00421c70(&DAT_04165818);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004014b0(0x10,0xc0,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x3da);
    iVar1 = 0;
    uVar3 = 0;
    goto LAB_0043bdac;
  }
  *puVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0042d830(param_1,&local_28);
  if (uVar3 == 0) {
    uVar7 = 0x3e3;
LAB_0043be70:
    uVar6 = 0x10;
LAB_0043be7c:
    FUN_004014b0(0x10,0xc0,uVar6,"external/openssl/crypto/ec/ec_asn1.c",uVar7);
    iVar1 = 0;
  }
  else {
    FUN_0040a510(*(undefined8 *)(puVar2 + 2),local_28,uVar3 & 0xffffffff);
    local_28 = 0;
    uVar8 = *(uint *)(param_1 + 0x30);
    if ((uVar8 & 1) == 0) {
      lVar4 = FUN_0043afe0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(puVar2 + 4));
      *(long *)(puVar2 + 4) = lVar4;
      if (lVar4 == 0) {
        uVar7 = 0x3ee;
        goto LAB_0043be70;
      }
      uVar8 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar8 >> 1 & 1) == 0) {
      lVar4 = FUN_0041cf50();
      *(long *)(puVar2 + 6) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x41;
        uVar7 = 0x3f6;
        goto LAB_0043be7c;
      }
      lVar4 = FUN_0042d5e0(param_1,*(undefined4 *)(param_1 + 0x34),&local_38,0);
      if (lVar4 == 0) {
        uVar7 = 0x3fd;
        goto LAB_0043be70;
      }
      lVar5 = *(long *)(puVar2 + 6);
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffff0 | 8;
      FUN_0040a510(lVar5,local_38,lVar4);
      local_38 = 0;
    }
    iVar1 = FUN_0041f020(puVar2,param_2,&DAT_04165818);
    if (iVar1 == 0) {
      FUN_004014b0(0x10,0xc0,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x408);
    }
  }
LAB_0043bdac:
  FUN_00400620(local_28,uVar3,"external/openssl/crypto/ec/ec_asn1.c",0x40d);
  FUN_00400420(local_38,"external/openssl/crypto/ec/ec_asn1.c",0x40e);
  FUN_00421810(puVar2,&DAT_04165818);
  return iVar1;
}



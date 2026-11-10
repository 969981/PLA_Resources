/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422040; name: FUN_00422040
 */


ulong FUN_00422040(long *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    if (param_3 == 0) {
      if (*(code **)(lVar4 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042209c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0x10))(param_1,param_2);
        return uVar2;
      }
    }
    else if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
      (**(code **)(lVar4 + 0x20))(param_1,param_2);
      return 1;
    }
  }
  uVar1 = 0xffffffff;
  if (*param_2 != '\x05') {
    uVar1 = *(undefined4 *)(param_2 + 8);
    switch(uVar1) {
    case 1:
      *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
      return 1;
    case 5:
      *param_1 = 1;
      return 1;
    case 6:
      lVar4 = FUN_00407cb0(0);
      *param_1 = lVar4;
      return 1;
    case 0xfffffffc:
      puVar3 = (undefined4 *)FUN_00400260(0x10,"external/openssl/crypto/asn1/tasn_new.c",0x12e);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_004014b0(0xd,0x77,0x41,"external/openssl/crypto/asn1/tasn_new.c",0x12f);
        return 0;
      }
      *(undefined8 *)(puVar3 + 2) = 0;
      *puVar3 = 0xffffffff;
      *param_1 = (long)puVar3;
      goto LAB_004220e8;
    }
  }
  if (param_3 == 0) {
    puVar5 = (undefined8 *)FUN_0040a550();
    *param_1 = (long)puVar5;
  }
  else {
    puVar5 = (undefined8 *)*param_1;
    puVar5[2] = 0x80;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)((long)puVar5 + 4) = uVar1;
  }
  if ((puVar5 != (undefined8 *)0x0) && (*param_2 == '\x05')) {
    puVar5[2] = puVar5[2] | 0x40;
  }
LAB_004220e8:
  return (ulong)(*param_1 != 0);
}



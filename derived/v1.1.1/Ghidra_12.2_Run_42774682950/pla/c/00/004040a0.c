/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004040a0; name: FUN_004040a0
 */


/* WARNING: Removing unreachable block (ram,0x004042a4) */

ulong FUN_004040a0(long *param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x20) == 0)) {
    uVar5 = 0x79;
    uVar6 = 0x100;
LAB_00404128:
    FUN_004014b0(0x20,0x78,uVar5,"external/openssl/crypto/bio/bio_lib.c",uVar6);
    uVar3 = 0xfffffffe;
    goto LAB_00404130;
  }
  pcVar1 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar1 != (code *)0x0) goto LAB_00404148;
LAB_00404178:
    if ((int)param_1[4] == 0) {
      uVar6 = 0x10a;
      uVar5 = 0x78;
      goto LAB_00404128;
    }
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
    uVar3 = uVar4 & 0xffffffff;
    iVar2 = (int)uVar4;
    if (0 < iVar2) {
      param_1[0xb] = param_1[0xb] + *param_4;
    }
    pcVar1 = (code *)param_1[2];
    if ((code *)param_1[1] == (code *)0x0) {
      if (pcVar1 != (code *)0x0) goto LAB_00404210;
LAB_00404234:
      if ((int)uVar3 < 1) goto LAB_00404130;
    }
    else {
      if (pcVar1 != (code *)0x0) {
LAB_00404210:
        uVar3 = (*pcVar1)(param_1,0x82,param_2,param_3,0,0,uVar3,param_4);
        goto LAB_00404234;
      }
      if (param_3 >> 0x1f != 0) {
LAB_004041e0:
        uVar3 = 0xffffffffffffffff;
        goto LAB_00404130;
      }
      if (iVar2 < 1) {
        uVar3 = (ulong)iVar2;
      }
      else {
        uVar3 = *param_4;
        if (uVar3 >> 0x1f != 0) goto LAB_004041e0;
      }
      uVar3 = (*(code *)param_1[1])(param_1,0x82,param_2,param_3 & 0xffffffff,0,uVar3);
      if ((long)uVar3 < 1) goto LAB_00404234;
      *param_4 = uVar3;
      uVar3 = 1;
    }
    if (*param_4 <= param_3) goto LAB_00404130;
    FUN_004014b0(0x20,0x78,0x44,"external/openssl/crypto/bio/bio_lib.c",0x119);
  }
  else {
    if (pcVar1 != (code *)0x0) {
LAB_00404148:
      uVar3 = (*pcVar1)(param_1,2,param_2,param_3,0,0,1,0);
      iVar2 = (int)uVar3;
joined_r0x00404174:
      if (iVar2 < 1) goto LAB_00404130;
      goto LAB_00404178;
    }
    if (param_3 >> 0x1f == 0) {
      uVar3 = (*(code *)param_1[1])(param_1,2,param_2,param_3 & 0xffffffff,0,1);
      iVar2 = (int)uVar3;
      goto joined_r0x00404174;
    }
  }
  uVar3 = 0xffffffff;
LAB_00404130:
  return uVar3 & 0xffffffff;
}



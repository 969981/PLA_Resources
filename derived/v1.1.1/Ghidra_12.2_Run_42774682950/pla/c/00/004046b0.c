/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004046b0; name: FUN_004046b0
 */


/* WARNING: Removing unreachable block (ram,0x0040482c) */

ulong FUN_004046b0(long *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  code *pcVar8;
  ulong local_28;
  
  local_28 = 0;
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x38) == 0)) {
    uVar3 = 0x79;
    uVar4 = 0x1b6;
  }
  else {
    if (param_3 < 0) {
      FUN_004014b0(0x20,0x68,0x7d,"external/openssl/crypto/bio/bio_lib.c",0x1bb);
      uVar1 = 0;
      goto LAB_0040473c;
    }
    pcVar8 = (code *)param_1[2];
    if ((code *)param_1[1] == (code *)0x0) {
      if (pcVar8 != (code *)0x0) goto LAB_00404778;
    }
    else {
      if (pcVar8 == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,5,param_2,param_3,0,1);
        iVar5 = (int)uVar1;
      }
      else {
LAB_00404778:
        uVar1 = (*pcVar8)(param_1,5,param_2,(long)param_3,0,0,1,0);
        iVar5 = (int)uVar1;
      }
      if (iVar5 < 1) goto LAB_0040473c;
    }
    if ((int)param_1[4] != 0) {
      uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
      uVar1 = uVar2 & 0xffffffff;
      if ((int)uVar2 < 1) {
        uVar2 = 0;
        pcVar8 = (code *)param_1[1];
        pcVar7 = (code *)param_1[2];
        if (pcVar8 != (code *)0x0) goto LAB_004047e8;
LAB_00404858:
        if (pcVar7 != (code *)0x0) {
LAB_0040485c:
          uVar1 = (*pcVar7)(param_1,0x85,param_2,(long)param_3,0,0,uVar1,&local_28);
        }
LAB_00404880:
        if ((int)uVar1 < 1) goto LAB_0040473c;
      }
      else {
        uVar2 = (ulong)(int)uVar2;
        uVar1 = 1;
        pcVar8 = (code *)param_1[1];
        pcVar7 = (code *)param_1[2];
        local_28 = uVar2;
        if (pcVar8 == (code *)0x0) goto LAB_00404858;
LAB_004047e8:
        if (pcVar7 != (code *)0x0) goto LAB_0040485c;
        if ((int)uVar1 < 1) {
          uVar2 = (long)(int)uVar1;
        }
        uVar1 = (*pcVar8)(param_1,0x85,param_2,param_3,0,uVar2);
        if ((long)uVar1 < 1) goto LAB_00404880;
        local_28 = uVar1;
      }
      uVar6 = (uint)local_28;
      if ((ulong)(long)param_3 < local_28) {
        uVar6 = 0xffffffff;
      }
      uVar1 = (ulong)uVar6;
      goto LAB_0040473c;
    }
    uVar4 = 0x1c6;
    uVar3 = 0x78;
  }
  FUN_004014b0(0x20,0x68,uVar3,"external/openssl/crypto/bio/bio_lib.c",uVar4);
  uVar1 = 0xfffffffe;
LAB_0040473c:
  return uVar1 & 0xffffffff;
}



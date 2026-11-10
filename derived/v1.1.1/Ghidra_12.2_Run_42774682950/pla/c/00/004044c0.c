/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004044c0; name: FUN_004044c0
 */


/* WARNING: Removing unreachable block (ram,0x00404610) */

ulong FUN_004044c0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  ulong local_18;
  
  local_18 = 0;
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x30) == 0)) {
    uVar3 = 0x79;
    uVar4 = 0x189;
  }
  else {
    pcVar7 = (code *)param_1[2];
    if ((code *)param_1[1] == (code *)0x0) {
      if (pcVar7 != (code *)0x0) goto LAB_00404554;
    }
    else {
      if (pcVar7 == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,4,param_2,0,0,1);
        iVar5 = (int)uVar1;
      }
      else {
LAB_00404554:
        uVar1 = (*pcVar7)(param_1,4,param_2,0,0,0,1,0);
        iVar5 = (int)uVar1;
      }
      if (iVar5 < 1) goto LAB_00404540;
    }
    if ((int)param_1[4] != 0) {
      uVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
      uVar1 = uVar2 & 0xffffffff;
      if ((int)uVar2 < 1) {
        uVar2 = 0;
        pcVar7 = (code *)param_1[1];
        pcVar6 = (code *)param_1[2];
        if (pcVar7 != (code *)0x0) goto LAB_004045cc;
LAB_0040463c:
        if (pcVar6 != (code *)0x0) {
LAB_00404640:
          uVar1 = (*pcVar6)(param_1,0x84,param_2,0,0,0,uVar1,&local_18);
        }
LAB_00404664:
        if ((int)uVar1 < 1) goto LAB_00404540;
      }
      else {
        uVar2 = (ulong)(int)uVar2;
        uVar1 = 1;
        param_1[0xc] = param_1[0xc] + uVar2;
        pcVar7 = (code *)param_1[1];
        pcVar6 = (code *)param_1[2];
        local_18 = uVar2;
        if (pcVar7 == (code *)0x0) goto LAB_0040463c;
LAB_004045cc:
        if (pcVar6 != (code *)0x0) goto LAB_00404640;
        if ((int)uVar1 < 1) {
          uVar2 = (long)(int)uVar1;
        }
        uVar1 = (*pcVar7)(param_1,0x84,param_2,0,0,uVar2);
        if ((long)uVar1 < 1) goto LAB_00404664;
        local_18 = uVar1;
      }
      uVar1 = local_18;
      if (local_18 >> 0x1f != 0) {
        FUN_004014b0(0x20,0x6e,0x66,"external/openssl/crypto/bio/bio_lib.c",0x1a6);
        return 0xffffffff;
      }
      goto LAB_00404540;
    }
    uVar4 = 0x194;
    uVar3 = 0x78;
  }
  FUN_004014b0(0x20,0x6e,uVar3,"external/openssl/crypto/bio/bio_lib.c",uVar4);
  uVar1 = 0xfffffffe;
LAB_00404540:
  return uVar1 & 0xffffffff;
}



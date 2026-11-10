/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404a80; name: FUN_00404a80
 */


long FUN_00404a80(long *param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_18;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  local_18 = param_3;
  if (((*param_1 == 0) || (param_2 != 0xe)) ||
     (pcVar3 = *(code **)(*param_1 + 0x58), pcVar3 == (code *)0x0)) {
    FUN_004014b0(0x20,0x83,0x79,"external/openssl/crypto/bio/bio_lib.c",0x222);
    return -2;
  }
  pcVar1 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_00404b68;
LAB_00404b2c:
    lVar2 = (*pcVar1)(param_1,6,&local_18,0,0xe,0,1,0);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_00404b2c;
    lVar2 = (*(code *)param_1[1])(param_1,6,&local_18,0xe,0,1);
  }
  if (lVar2 < 1) {
    return lVar2;
  }
  pcVar3 = *(code **)(*param_1 + 0x58);
LAB_00404b68:
  lVar2 = (*pcVar3)(param_1,0xe,local_18);
  pcVar3 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar3 == (code *)0x0) {
      return lVar2;
    }
  }
  else if (pcVar3 == (code *)0x0) {
    lVar2 = (*(code *)param_1[1])(param_1,0x86,&local_18,0xe,0,lVar2);
    return lVar2;
  }
  lVar2 = (*pcVar3)(param_1,0x86,&local_18,0,0xe,0,lVar2,0);
  return lVar2;
}



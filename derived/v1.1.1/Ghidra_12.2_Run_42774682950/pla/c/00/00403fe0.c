/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00403fe0; name: thunk_FUN_00403ee0
 */


undefined8 thunk_FUN_00403ee0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = param_1 + 10;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 != 0) {
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/crypto/bio/bio_lib.c",0x7b);
    }
    return 1;
  }
  DataMemoryBarrier(2,1);
  pcVar6 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar6 == (code *)0x0) goto LAB_00403f90;
LAB_00403f64:
    uVar5 = (*pcVar6)(param_1,1,0,0,0,0,1,0);
    iVar4 = (int)uVar5;
  }
  else {
    if (pcVar6 != (code *)0x0) goto LAB_00403f64;
    uVar5 = (*(code *)param_1[1])(param_1,1,0,0,0,1);
    iVar4 = (int)uVar5;
  }
  if (iVar4 < 1) {
    return uVar5;
  }
LAB_00403f90:
  if ((*param_1 != 0) && (pcVar6 = *(code **)(*param_1 + 0x50), pcVar6 != (code *)0x0)) {
    (*pcVar6)(param_1);
  }
  FUN_00400e80(0xc,param_1,param_1 + 0xd);
  FUN_00400180(param_1[0xe]);
  FUN_00400420(param_1,"external/openssl/crypto/bio/bio_lib.c",0x8a);
  return 1;
}



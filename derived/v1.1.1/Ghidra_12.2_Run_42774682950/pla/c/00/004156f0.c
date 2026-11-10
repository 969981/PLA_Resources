/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004156f0; name: FUN_004156f0
 */


undefined8 FUN_004156f0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      DataMemoryBarrier(2,1);
      if ((((*(byte *)((long)param_1 + 0x14) >> 2 & 1) == 0) &&
          (*(code **)(*param_1 + 0x10) != (code *)0x0)) &&
         (iVar4 = (**(code **)(*param_1 + 0x10))(param_1), iVar4 == 0)) {
        uVar5 = 0x6b;
        uVar6 = 0x4f;
      }
      else {
        if ((*(code **)(*param_1 + 0x40) == (code *)0x0) ||
           (iVar4 = (**(code **)(*param_1 + 0x40))(param_1), iVar4 != 0)) {
          FUN_00407010(param_1[1]);
          FUN_00400420(param_1[6],"external/openssl/crypto/dso/dso_lib.c",0x5a);
          FUN_00400420(param_1[7],"external/openssl/crypto/dso/dso_lib.c",0x5b);
          FUN_00400180(param_1[8]);
          FUN_00400420(param_1,"external/openssl/crypto/dso/dso_lib.c",0x5d);
          return 1;
        }
        uVar5 = 0x66;
        uVar6 = 0x55;
      }
      FUN_004014b0(0x25,0x6f,uVar5,"external/openssl/crypto/dso/dso_lib.c",uVar6);
      return 0;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/crypto/dso/dso_lib.c",0x4b);
    }
  }
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045f5a0; name: FUN_0045f5a0
 */


undefined8 FUN_0045f5a0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_2 != (int *)0x0) {
    FUN_00402590(param_1,"%*s%s:\n",param_3,&DAT_03996322,param_4);
    if (*param_2 == 0) {
      FUN_00402590(param_1,"%*sinherit\n",(int)param_3 + 2,&DAT_03996322);
    }
    else {
      if (*param_2 != 1) {
        return 0;
      }
      iVar1 = FUN_00407950(*(undefined8 *)(param_2 + 2));
      if (0 < iVar1) {
        iVar6 = 0;
        iVar1 = (int)param_3 + 2;
        do {
          piVar3 = (int *)FUN_00407970(*(undefined8 *)(param_2 + 2),iVar6);
          if (*piVar3 == 1) {
            lVar4 = FUN_0044c190(0,**(undefined8 **)(piVar3 + 2));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_00402590(param_1,"%*s%s-",iVar1,&DAT_03996322,lVar4);
            FUN_00400420(lVar4,"external/openssl/crypto/x509v3/v3_asid.c",0x59);
            lVar4 = FUN_0044c190(0,*(undefined8 *)(*(long *)(piVar3 + 2) + 8));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_00402590(param_1,&DAT_039b05f7,lVar4);
            uVar5 = 0x5d;
          }
          else {
            if (*piVar3 != 0) {
              return 0;
            }
            lVar4 = FUN_0044c190(0,*(undefined8 *)(piVar3 + 2));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_00402590(param_1,"%*s%s\n",iVar1,&DAT_03996322,lVar4);
            uVar5 = 0x53;
          }
          FUN_00400420(lVar4,"external/openssl/crypto/x509v3/v3_asid.c",uVar5);
          iVar6 = iVar6 + 1;
          iVar2 = FUN_00407950(*(undefined8 *)(param_2 + 2));
        } while (iVar6 < iVar2);
      }
    }
  }
  return 1;
}



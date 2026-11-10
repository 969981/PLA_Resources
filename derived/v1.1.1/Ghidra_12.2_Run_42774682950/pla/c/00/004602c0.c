/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004602c0; name: FUN_004602c0
 */


void FUN_004602c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  
  iVar2 = FUN_00407950(param_2);
  if (0 < iVar2) {
    iVar9 = 0;
    iVar2 = param_3 + 2;
    do {
      puVar5 = (undefined8 *)FUN_00407970(param_2,iVar9);
      iVar3 = FUN_00407f40(*puVar5);
      if (iVar3 == 0xa5) {
        FUN_00402590(param_1,"%*sUser Notice:\n",param_3,&DAT_03996322);
        puVar5 = (undefined8 *)puVar5[1];
        plVar10 = (long *)*puVar5;
        if (plVar10 != (long *)0x0) {
          FUN_00402590(param_1,"%*sOrganization: %s\n",iVar2,&DAT_03996322,
                       *(undefined8 *)(*plVar10 + 8));
          iVar3 = FUN_00407950(plVar10[1]);
          puVar1 = &DAT_038d12a5;
          if (iVar3 < 2) {
            puVar1 = &DAT_03996322;
          }
          FUN_00402590(param_1,"%*sNumber%s: ",iVar2,&DAT_03996322,puVar1);
          iVar3 = FUN_00407950(plVar10[1]);
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              lVar6 = FUN_00407970(plVar10[1],iVar3);
              if (iVar3 != 0) {
                FUN_004044c0(param_1,&DAT_0398d5c8);
              }
              if (lVar6 == 0) {
                FUN_004044c0(param_1,"(null)");
              }
              else {
                lVar6 = FUN_0044c190(0,lVar6);
                if (lVar6 == 0) goto LAB_00460350;
                FUN_004044c0(param_1,lVar6);
                FUN_00400420(lVar6,"external/openssl/crypto/x509v3/v3_cpols.c",0x1d3);
              }
              iVar3 = iVar3 + 1;
              iVar4 = FUN_00407950(plVar10[1]);
            } while (iVar3 < iVar4);
          }
          FUN_004044c0(param_1,&DAT_0396725e);
        }
        lVar6 = puVar5[1];
        if (lVar6 != 0) {
          uVar8 = *(undefined8 *)(lVar6 + 8);
          pcVar7 = "%*sExplicit Text: %s\n";
          iVar3 = iVar2;
          goto LAB_004604e0;
        }
      }
      else if (iVar3 == 0xa4) {
        pcVar7 = "%*sCPS: %s\n";
        uVar8 = *(undefined8 *)(puVar5[1] + 8);
        iVar3 = param_3;
LAB_004604e0:
        FUN_00402590(param_1,pcVar7,iVar3,&DAT_03996322,uVar8);
      }
      else {
        FUN_00402590(param_1,"%*sUnknown Qualifier: ",iVar2,&DAT_03996322);
        FUN_004096a0(param_1,*puVar5);
        FUN_004044c0(param_1,&DAT_0396725e);
      }
LAB_00460350:
      iVar9 = iVar9 + 1;
      iVar3 = FUN_00407950(param_2);
    } while (iVar9 < iVar3);
  }
  return;
}



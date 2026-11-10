/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057e690; name: FUN_0057e690
 */


void FUN_0057e690(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((param_2 == (long *)0x0) || (iVar2 = strcmp((char *)*param_2,"invalid"), iVar2 == 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                 ,0x1da,2,"Invalid input for refresh token credentials creation");
    *param_1 = 0;
    return;
  }
  plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0xf0);
  puVar1 = PTR_DAT_04374e08;
  if (plVar3 != (long *)0x0) {
    lVar5 = param_2[1];
    lVar4 = *param_2;
    lVar7 = param_2[3];
    lVar6 = param_2[2];
    plVar3[2] = 1;
    plVar3[3] = (long)"Oauth2";
    *(undefined4 *)(plVar3 + 4) = 2;
    plVar3[9] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    auVar8 = FUN_002eefe0(0);
    *(undefined1 (*) [16])(plVar3 + 10) = auVar8;
    *(undefined1 *)(plVar3 + 0xc) = 0;
    plVar3[0xd] = 0;
    FUN_002fe040();
    auVar8 = FUN_003d6b30();
    *(undefined1 (*) [16])(plVar3 + 0xf) = auVar8;
    FUN_002ef6d0(plVar3 + 5);
    FUN_00578e10(plVar3 + 0xe);
    *plVar3 = (long)(PTR_DAT_04374e10 + 0x10);
    plVar3[0x14] = lVar7;
    plVar3[0x13] = lVar6;
    plVar3[0x12] = lVar5;
    plVar3[0x11] = lVar4;
  }
  *param_1 = plVar3;
  return;
}



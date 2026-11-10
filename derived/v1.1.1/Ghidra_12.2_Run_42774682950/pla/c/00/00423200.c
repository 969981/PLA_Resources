/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423200; name: FUN_00423200
 */


undefined8 * FUN_00423200(int param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long local_38;
  
  puVar6 = (undefined8 *)FUN_004002a0(0x48,"external/openssl/crypto/evp/p_lib.c",0x8e);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_004014b0(6,0x6a,0x41,"external/openssl/crypto/evp/p_lib.c",0x91);
    return (undefined8 *)0x0;
  }
  piVar1 = (int *)(puVar6 + 1);
  *puVar6 = 0;
  *piVar1 = 1;
  *(undefined4 *)(puVar6 + 6) = 1;
  lVar7 = FUN_004000a0();
  puVar6[8] = lVar7;
  if (lVar7 == 0) {
    FUN_004014b0(6,0x6a,0x41,"external/openssl/crypto/evp/p_lib.c",0x9a);
    uVar9 = 0x9b;
    goto LAB_004233f8;
  }
  plVar2 = &local_38;
  if (param_2 != 0) {
    plVar2 = (long *)0x0;
  }
  local_38 = param_2;
  if (((puVar6[5] != 0) && (puVar6[2] != 0)) &&
     (pcVar12 = *(code **)(puVar6[2] + 0xa8), pcVar12 != (code *)0x0)) {
    (*pcVar12)(puVar6);
    puVar6[5] = 0;
  }
  if ((*(int *)((long)puVar6 + 4) == param_1) &&
     (puVar8 = (undefined4 *)puVar6[2], puVar8 != (undefined4 *)0x0)) {
LAB_004232c4:
    if (*(code **)(puVar8 + 0x3e) == (code *)0x0) {
      uVar9 = 0xbf;
      uVar10 = 0x96;
      uVar11 = 0xed;
    }
    else {
      iVar5 = (**(code **)(puVar8 + 0x3e))(puVar6,param_3,param_4);
      if (iVar5 != 0) {
        return puVar6;
      }
      uVar9 = 0xbf;
      uVar10 = 0xb4;
      uVar11 = 0xf2;
    }
  }
  else {
    puVar8 = (undefined4 *)FUN_0043e620(plVar2,param_1);
    if (puVar8 != (undefined4 *)0x0) {
      puVar6[2] = puVar8;
      puVar6[3] = local_38;
      *(undefined4 *)puVar6 = *puVar8;
      *(int *)((long)puVar6 + 4) = param_1;
      goto LAB_004232c4;
    }
    uVar9 = 0x9e;
    uVar10 = 0x9c;
    uVar11 = 0xd2;
  }
  FUN_004014b0(6,uVar9,uVar10,"external/openssl/crypto/evp/p_lib.c",uVar11);
  do {
    iVar5 = *piVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 != 0) {
    if (iVar5 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/crypto/evp/p_lib.c",0x25c);
    }
    return (undefined8 *)0x0;
  }
  DataMemoryBarrier(2,1);
  if ((puVar6[2] != 0) && (pcVar12 = *(code **)(puVar6[2] + 0xa8), pcVar12 != (code *)0x0)) {
    (*pcVar12)(puVar6);
    puVar6[5] = 0;
  }
  FUN_00400180(puVar6[8]);
  FUN_004078c0(puVar6[7],PTR_LAB_04374220);
  uVar9 = 0x260;
LAB_004233f8:
  FUN_00400420(puVar6,"external/openssl/crypto/evp/p_lib.c",uVar9);
  return (undefined8 *)0x0;
}



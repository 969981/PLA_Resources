/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00300350; name: FUN_00300350
 */


long FUN_00300350(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_34;
  
  *param_4 = -1;
  iVar1 = FUN_00308450(param_2,param_3);
  if (iVar1 == 0) {
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    uVar8 = param_2[6];
    uVar10 = param_2[9];
    uVar9 = param_2[8];
    param_3[7] = param_2[7];
    param_3[6] = uVar8;
    param_3[9] = uVar10;
    param_3[8] = uVar9;
    param_3[3] = uVar5;
    param_3[2] = uVar4;
    param_3[5] = uVar7;
    param_3[4] = uVar6;
    uVar9 = param_2[0xf];
    uVar8 = param_2[0xe];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    uVar7 = param_2[0xd];
    uVar6 = param_2[0xc];
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    param_3[0xd] = uVar7;
    param_3[0xc] = uVar6;
    param_3[0xf] = uVar9;
    param_3[0xe] = uVar8;
    param_3[0xb] = uVar5;
    param_3[10] = uVar4;
  }
  lVar3 = FUN_00309870(param_3,1,0,&local_34,param_4);
  if (lVar3 == 0) {
    if ((local_34 == 1) && (iVar1 = FUN_00308390(param_2,param_3), iVar1 == 0)) {
      uVar4 = *param_2;
      param_3[1] = param_2[1];
      *param_3 = uVar4;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      uVar7 = param_2[5];
      uVar6 = param_2[4];
      uVar8 = param_2[6];
      uVar10 = param_2[9];
      uVar9 = param_2[8];
      param_3[7] = param_2[7];
      param_3[6] = uVar8;
      param_3[9] = uVar10;
      param_3[8] = uVar9;
      param_3[3] = uVar5;
      param_3[2] = uVar4;
      param_3[5] = uVar7;
      param_3[4] = uVar6;
      uVar9 = param_2[0xf];
      uVar8 = param_2[0xe];
      uVar5 = param_2[0xb];
      uVar4 = param_2[10];
      uVar7 = param_2[0xd];
      uVar6 = param_2[0xc];
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      param_3[0xd] = uVar7;
      param_3[0xc] = uVar6;
      param_3[0xf] = uVar9;
      param_3[0xe] = uVar8;
      param_3[0xb] = uVar5;
      param_3[10] = uVar4;
    }
    iVar1 = *param_4;
    if (iVar1 < 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_client_posix.cc",0x4a,2,
                   "assertion failed: %s","fd >= 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = FUN_00308de0(iVar1,1);
    if ((((lVar3 != 0) || (lVar3 = FUN_00308ec0(iVar1,1), lVar3 != 0)) ||
        ((iVar2 = FUN_002fe910(param_3), iVar2 == 0 &&
         (((lVar3 = FUN_003092b0(iVar1,1), lVar3 != 0 || (lVar3 = FUN_00308f90(iVar1,1), lVar3 != 0)
           ) || (lVar3 = FUN_003093e0(iVar1,param_1,1), lVar3 != 0)))))) ||
       ((lVar3 = FUN_00308eb0(iVar1), lVar3 != 0 ||
        (lVar3 = FUN_003096d0(iVar1,param_1), lVar3 != 0)))) {
      nnsocketClose(iVar1);
    }
  }
  return lVar3;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052a60c; name: FUN_0052a60c
 */


void FUN_0052a60c(long param_1,long param_2,long param_3,ulong *param_4)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *__s;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte local_58 [16];
  ulong local_48;
  
  uVar8 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_1 + 400);
  *(char **)(param_3 + 0x48) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
  *(undefined1 **)(param_3 + 0x28) = &LAB_0052b964;
  *(long *)(param_3 + 0x30) = param_3;
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined2 *)(param_3 + 0x40) = 0;
  *(undefined4 *)(param_3 + 0x50) = 0xd20;
  puVar2 = PTR_DAT_04374b48;
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined4 *)(param_3 + 0x60) = 0;
  if (puVar2[0x10] == '\0') {
LAB_0052a674:
    uVar11 = *param_4;
    if ((uVar11 & 1) != 0) goto LAB_0052a714;
LAB_0052a680:
    __s = param_4 + 1;
    uVar4 = 6;
    uVar10 = uVar11 >> 1;
    puVar3 = __s;
    if (uVar10 == 6) goto LAB_0052a724;
  }
  else {
    FUN_003d22a0(local_58,param_3);
    uVar11 = (ulong)local_58 | 1;
    if ((local_58[0] & 1) != 0) {
      uVar11 = local_48;
    }
                    /* try { // try from 0052a6cc to 0052a6ef has its CatchHandler @ 0052a84c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0xd22,1,"chand=%p calld=%p: starting subchannel batch: %s",uVar8,param_1,uVar11);
    if ((local_58[0] & 1) == 0) goto LAB_0052a674;
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
    uVar11 = *param_4;
    if ((uVar11 & 1) == 0) goto LAB_0052a680;
LAB_0052a714:
    __s = (ulong *)param_4[1];
    uVar4 = param_4[2];
    uVar10 = uVar11 >> 1;
    puVar3 = __s;
    if (uVar10 == uVar4) {
LAB_0052a724:
      uVar9 = uVar4 * 2;
      puVar3 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar4 * 0x30);
      puVar7 = puVar3;
      goto LAB_0052a744;
    }
  }
  uVar9 = 0;
  __s = puVar3;
  puVar7 = (ulong *)0x0;
LAB_0052a744:
  puVar3 = puVar3 + uVar10 * 3;
  *puVar3 = param_3 + 0x20;
  puVar3[2] = (ulong)"start_subchannel_batch";
  puVar3[1] = 0;
  if (puVar7 == (ulong *)0x0) {
    uVar11 = *param_4;
  }
  else {
    if (uVar10 != 0) {
      uVar11 = uVar11 >> 1 & 1;
      puVar3 = __s;
      if (uVar10 == 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar6 = puVar7;
        do {
          uVar12 = puVar3[1];
          uVar4 = *puVar3;
          lVar5 = lVar5 + 2;
          puVar6[2] = puVar3[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar4;
          uVar12 = puVar3[4];
          uVar4 = puVar3[3];
          puVar1 = puVar3 + 5;
          puVar3 = puVar3 + 6;
          puVar6[5] = *puVar1;
          puVar6[4] = uVar12;
          puVar6[3] = uVar4;
          puVar6 = puVar6 + 6;
        } while (uVar10 - uVar11 != lVar5);
      }
      if (uVar11 != 0) {
        uVar4 = puVar3[1];
        uVar11 = *puVar3;
        puVar6 = puVar7 + lVar5 * 3;
        puVar6[2] = puVar3[2];
        puVar6[1] = uVar4;
        *puVar6 = uVar11;
      }
    }
    if (__s != (ulong *)0x0) {
      memset(__s,0xab,uVar10 * 0x18);
    }
    uVar11 = *param_4;
    if ((uVar11 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_4[1]);
      uVar11 = *param_4;
    }
    uVar11 = uVar11 | 1;
    param_4[1] = (ulong)puVar7;
    param_4[2] = uVar9;
  }
  *param_4 = uVar11 + 2;
  return;
}



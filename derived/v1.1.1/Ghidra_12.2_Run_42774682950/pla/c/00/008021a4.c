/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008021a4; name: FUN_008021a4
 */


void FUN_008021a4(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 local_48 [2];
  undefined4 local_40 [4];
  
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0xffffffff00000000;
  puVar1 = PTR_DAT_043776f8;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  local_40[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_48);
  FUN_007ee578(param_1 + 4,local_40);
  puVar1 = PTR_DAT_04377700 + 0x68;
  plVar7 = param_1 + 8;
  *plVar7 = (long)(PTR_DAT_04377700 + 0x10);
  param_1[0xc] = (long)puVar1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = (long)(param_1 + 0xd);
  param_1[10] = 0x10;
  uVar3 = FUN_007ec9d0(plVar7,param_3,1);
  FUN_00802bf8(local_40,plVar7,param_3,uVar3,1);
  uVar2 = *(ushort *)(param_2 + 0x114e);
  uVar8 = (ulong)uVar2;
  *(ushort *)(param_1 + 7) = uVar2;
  uVar4 = FUN_007e336c();
  lVar5 = FUN_0081a750(uVar8 << 5,uVar4);
  if ((lVar5 != 0) && (uVar2 != 0)) {
    lVar6 = lVar5;
    do {
      FUN_007f0ce0(lVar6);
      uVar8 = uVar8 - 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar8 != 0);
  }
  param_1[6] = lVar5;
  return;
}



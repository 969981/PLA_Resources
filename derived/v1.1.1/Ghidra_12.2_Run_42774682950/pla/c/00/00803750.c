/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00803750; name: FUN_00803750
 */


void FUN_00803750(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  bVar5 = FUN_007f0f48(param_2[0x1e] + 0x98,param_4);
  *(byte *)((long)param_2 + 0xa4) = bVar5 & 1;
  uVar6 = FUN_007f6f5c(param_2[0x1e]);
  if ((uVar6 & 1) != 0) {
    local_40[0] = 0x10408;
    goto LAB_00803858;
  }
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[0xb] = param_3;
  FUN_007e5bd8(param_3);
  FUN_007e5c2c(param_2[0xb]);
  FUN_007f0f88(param_2 + 0x15,param_4);
  plVar7 = (long *)param_2[0x1e];
  if (*(char *)((long)param_2 + 0xa4) == '\0') {
    if ((int)plVar7[0x38] != 3) {
      uVar8 = 3;
      goto LAB_00803804;
    }
  }
  else if ((int)plVar7[0x38] != 2) {
    uVar8 = 2;
LAB_00803804:
    *(undefined4 *)(plVar7 + 0x38) = uVar8;
  }
  if (*(char *)((long)plVar7 + 0x24a) != '\0') {
    *(undefined1 *)((long)plVar7 + 0x24a) = 0;
  }
  uVar6 = (**(code **)(*plVar7 + 0x188))();
  puVar3 = PTR_FUN_04377730;
  bVar4 = (uVar6 & 1) == 0;
  pcVar1 = "NetHostMigrationJob::DisconnectNetwork";
  if (bVar4) {
    pcVar1 = "NetHostMigrationJob::EmulateDisconnection";
  }
  param_2[8] = (long)pcVar1;
  puVar2 = PTR_FUN_04377738;
  if (bVar4) {
    puVar2 = puVar3;
  }
  param_2[6] = (long)puVar2;
  param_2[7] = 0;
  local_40[0] = 0;
LAB_00803858:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8b80; name: FUN_007e8b80
 */


void FUN_007e8b80(long *param_1,undefined4 param_2,long param_3,int param_4)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  int local_38 [2];
  
  puVar2 = PTR_DAT_043774b8;
  param_1[2] = (long)PTR_LAB_043774b0;
  param_1[3] = 0;
  local_50 = PTR_DAT_043773d0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)param_1;
  local_50 = local_50 + 0x10;
  plVar1 = param_1 + 4;
  pcStack_48 = "Pia BackgroundScheduler";
  uVar5 = FUN_007e336c();
  iVar3 = 0x5000;
  if (param_4 != 0) {
    iVar3 = param_4;
  }
  FUN_00825330(plVar1,&local_50,param_1,uVar5,param_2,1,0x7fffffff,iVar3,0x20);
  param_1[0x23] = param_3;
  FUN_0082482c(param_1 + 0x24,0);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_007e8f94(param_1 + 0x2e);
  *(undefined4 *)((long)param_1 + 0x184) = 0xffffffff;
  iVar3 = FUN_007e2ea0();
  local_38[0] = 0;
  if (iVar3 == 0) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_043774c0);
    if (lVar6 == 0) {
      uVar4 = nn::os::GetCurrentCoreNumber();
    }
    else {
      uVar4 = (int)lVar6 - 1;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar4);
  }
  else {
    uVar4 = iVar3 - 1;
  }
  local_38[0] = 1 << (ulong)(uVar4 & 0x1f);
  FUN_00824dfc(plVar1,local_38);
  FUN_00824d64(plVar1);
  *(undefined4 *)((long)param_1 + 0x184) = 0x18;
  return;
}



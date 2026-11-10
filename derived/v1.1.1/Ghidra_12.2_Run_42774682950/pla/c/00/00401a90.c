/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00401a90; name: FUN_00401a90
 */


void FUN_00401a90(ulong param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  size_t sVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 auStack_120 [64];
  ulong local_e0 [8];
  ulong local_a0 [8];
  
  if (param_3 == 0) {
    return;
  }
  uVar5 = param_1 >> 0x18 & 0xff;
  iVar1 = FUN_004001b0(&DAT_0439de38,FUN_004013a0);
  if ((iVar1 == 0) || (DAT_0439de3c == 0)) {
LAB_00401b20:
    puVar6 = local_a0;
    FUN_00403120(local_a0,0x40,"lib(%lu)",uVar5);
  }
  else {
    local_a0[0] = param_1 & 0xff000000;
    FUN_00400120(DAT_0439de50);
    lVar2 = FUN_00405c90(DAT_0439de58,local_a0);
    FUN_00400160(DAT_0439de50);
    if ((lVar2 == 0) || (puVar6 = *(ulong **)(lVar2 + 8), puVar6 == (ulong *)0x0))
    goto LAB_00401b20;
  }
  iVar1 = FUN_004001b0(&DAT_0439de38,FUN_004013a0);
  if ((iVar1 == 0) || (DAT_0439de3c == 0)) {
LAB_00401b9c:
    uVar7 = param_1 >> 0xc & 0xfff;
  }
  else {
    local_e0[0] = param_1 & 0xfffff000;
    FUN_00400120(DAT_0439de50);
    lVar2 = FUN_00405c90(DAT_0439de58,local_e0);
    FUN_00400160(DAT_0439de50);
    if (lVar2 == 0) goto LAB_00401b9c;
    puVar8 = *(ulong **)(lVar2 + 8);
    uVar7 = param_1 >> 0xc & 0xfff;
    if (puVar8 != (ulong *)0x0) goto LAB_00401bbc;
  }
  puVar8 = local_e0;
  FUN_00403120(local_e0,0x40,"func(%lu)",uVar7);
LAB_00401bbc:
  puVar3 = (undefined1 *)FUN_00401d10(param_1);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = auStack_120;
    FUN_00403120(auStack_120,0x40,"reason(%lu)",param_1 & 0xfff);
  }
  FUN_00403120(param_2,param_3,"error:%08lX:%s:%s:%s",param_1,puVar6,puVar8,puVar3);
  sVar4 = strlen(param_2);
  if (sVar4 == param_3 - 1U) {
    FUN_00403120(param_2,param_3,"err:%lx:%lx:%lx:%lx",param_1,uVar5,uVar7,param_1 & 0xfff);
  }
  return;
}



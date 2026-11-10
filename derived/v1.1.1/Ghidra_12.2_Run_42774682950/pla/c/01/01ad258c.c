/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad258c; name: FUN_01ad258c
 */


void FUN_01ad258c(long param_1,undefined8 *param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_b0 [64];
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(int *)(param_1 + 0x5f8) == 1) && (*(int *)(param_1 + 0x760) == 1)) {
    *(undefined4 *)(param_1 + 0x760) = 2;
    lVar4 = *param_3;
    FUN_03024610(lVar4,*(undefined8 *)*param_2,auStack_b0);
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 4) != '\0')) {
      auVar1._8_8_ = uStack_68;
      auVar1._0_8_ = local_70;
      auVar5._8_8_ = uStack_68;
      auVar5._0_8_ = local_70;
      auVar5 = NEON_ext(auVar5,auVar1,8,1);
      *(ulong *)(param_1 + 0x5d8) = (ulong)auVar5._0_4_;
      *(undefined8 *)(param_1 + 0x5d0) = local_70;
    }
    *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(param_1 + 0x5e0);
    *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(param_1 + 0x5e8);
    *(undefined2 *)(param_1 + 0x768) = 0x100;
    puVar2 = (undefined4 *)FUN_01e4b314(param_2,param_3);
    if ((puVar2 != (undefined4 *)0x0) &&
       (uVar3 = FUN_01ad26ac(puVar2,0,param_1 + 0x768), (uVar3 & 1) == 0)) {
      *(undefined2 *)(param_1 + 0x768) = 0x101;
      *(undefined4 *)(param_1 + 0x770) = *puVar2;
      FUN_00b63974(param_1 + 0x778,puVar2 + 2);
      FUN_00cfa028(param_1 + 0x788,puVar2 + 6);
      FUN_0095aa3c(param_1 + 0x798,puVar2 + 10);
      *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(puVar2 + 0xe);
      FUN_00bd10a0(param_1 + 0x7b0,puVar2 + 0x10);
      *(undefined1 *)(param_1 + 0x7c0) = *(undefined1 *)(puVar2 + 0x14);
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01287918; name: FUN_01287918
 */


void FUN_01287918(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  local_78 = &LAB_01287cc8;
  uStack_70 = 0;
  local_a0 = &LAB_01288afc;
  local_98 = FUN_01288b1c;
  local_90 = &LAB_01288b20;
  puStack_88 = &LAB_01288b34;
  local_80 = param_1;
  uVar3 = FUN_00d67370(*(undefined8 *)(param_1 + 0x1b0));
  FUN_0128fa94(uVar1,0,uVar3);
  FUN_01287b1c(param_1,&local_a0);
  pcVar2 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar2)(&local_80);
  }
  return;
}



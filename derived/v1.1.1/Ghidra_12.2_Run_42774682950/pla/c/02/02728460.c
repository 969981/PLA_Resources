/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02728460; name: FUN_02728460
 */


void FUN_02728460(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  uVar2 = nn::err::ErrorCode::IsValid();
  if ((uVar2 & 1) != 0) {
    auStack_80[0] = *param_2;
    local_a0 = &LAB_027287f8;
    local_98 = FUN_027287fc;
    local_90 = &LAB_02728800;
    local_88 = &LAB_0272880c;
    FUN_0275eeb0(*(undefined8 *)(param_1 + 0x50),&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      local_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(auStack_80);
    }
  }
  return;
}



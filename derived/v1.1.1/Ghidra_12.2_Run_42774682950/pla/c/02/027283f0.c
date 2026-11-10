/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027283f0; name: FUN_027283f0
 */


void FUN_027283f0(long param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  if (*param_2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    FUN_007ee578(auStack_b0);
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    FUN_02728764(&local_a0,auStack_b0);
    FUN_0275eeb0(uVar2,&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      local_98 = (code *)0x0;
      (*pcVar1)(auStack_80);
    }
  }
  return;
}



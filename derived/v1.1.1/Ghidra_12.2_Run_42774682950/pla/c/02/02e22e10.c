/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22e10; name: FUN_02e22e10
 */


void FUN_02e22e10(ulong param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  
  *param_2 = 1;
  bVar1 = (param_1 & 0xf00) != 0x200;
  uVar3 = 0x721;
  if (bVar1) {
    uVar3 = 0;
  }
  *(undefined2 *)(param_2 + 1) = uVar3;
  uVar3 = 0x11d3;
  if (bVar1) {
    uVar3 = 0x10;
  }
  *(undefined2 *)((long)param_2 + 6) = uVar3;
  uVar2 = 0x86;
  if (bVar1) {
    uVar2 = 0x80;
  }
  *(undefined1 *)(param_2 + 2) = uVar2;
  uVar2 = 0x44;
  if (bVar1) {
    uVar2 = 0;
  }
  *(undefined1 *)((long)param_2 + 9) = uVar2;
  uVar2 = 200;
  if (bVar1) {
    uVar2 = 0;
  }
  *(undefined1 *)((long)param_2 + 10) = uVar2;
  uVar2 = 0xc1;
  if (bVar1) {
    uVar2 = 0xaa;
  }
  *(undefined1 *)((long)param_2 + 0xb) = uVar2;
  uVar2 = 0xca;
  if (bVar1) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_2 + 3) = uVar2;
  uVar2 = 0;
  if (bVar1) {
    uVar2 = 0x38;
  }
  *(undefined1 *)((long)param_2 + 0xd) = uVar2;
  uVar2 = 0;
  if (bVar1) {
    uVar2 = 0x9b;
  }
  *(undefined1 *)((long)param_2 + 0xe) = uVar2;
  uVar2 = 0;
  if (bVar1) {
    uVar2 = 0x71;
  }
  *(undefined1 *)((long)param_2 + 0xf) = uVar2;
  return;
}



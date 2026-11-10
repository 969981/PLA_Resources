/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ce2f0; name: FUN_004ce2f0
 */


/* WARNING: Removing unreachable block (ram,0x004ce308) */

void FUN_004ce2f0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      puVar1 = (undefined8 *)(param_1 + 0x80);
      do {
        uVar3 = puVar1[-10];
        lVar2 = lVar2 + 2;
        uVar4 = *puVar1;
        puVar1[-3] = 0;
        puVar1[-4] = 0;
        puVar1[-0xb] = 0;
        puVar1[-0xc] = 0;
        puVar1[-9] = 0;
        puVar1[-10] = 0;
        puVar1[-10] = uVar3;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[-0xf] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0xe] = 0;
        puVar1[-1] = 0;
        puVar1[-2] = 0;
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[-7] = 0;
        puVar1[-8] = 0;
        puVar1[-5] = 0;
        puVar1[-6] = 0;
        *puVar1 = uVar4;
        puVar1 = puVar1 + 0x14;
      } while (param_2 - (param_2 & 1) != lVar2);
      if ((param_2 & 1) == 0) {
        return;
      }
    }
    puVar1 = (undefined8 *)(param_1 + lVar2 * 0x50);
    uVar3 = puVar1[6];
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[6] = uVar3;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00560ab0; name: FUN_00560ab0
 */


void FUN_00560ab0(uint *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = (undefined1 *)
           FUN_002e2ec0(PTR_FUN_04373078,
                        (-(*(ulong *)(param_1 + 8) >> 0x1f & 1) & 0xfffffff800000000 |
                        (*(ulong *)(param_1 + 8) & 0xffffffff) << 3) + 0x18);
  puVar6 = puVar2 + 0x18;
  *(undefined1 **)(puVar2 + 8) = puVar6;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 == param_1 + 6) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    while( true ) {
      *(undefined8 *)(puVar6 + lVar3 * 8) = *(undefined8 *)(puVar4 + 7);
      lVar3 = lVar3 + 1;
      puVar5 = *(uint **)(puVar4 + 2);
      if (*(uint **)(puVar4 + 2) == (uint *)0x0) {
        puVar5 = puVar4 + 4;
        bVar1 = *(uint **)*(uint **)puVar5 != puVar4;
        puVar4 = *(uint **)puVar5;
        if (bVar1) {
          do {
            lVar7 = *(long *)puVar5;
            puVar5 = (uint *)(lVar7 + 0x10);
            puVar4 = *(uint **)puVar5;
          } while (*(long *)puVar4 != lVar7);
        }
      }
      else {
        do {
          puVar4 = puVar5;
          puVar5 = *(uint **)puVar4;
        } while (*(uint **)puVar4 != (uint *)0x0);
      }
      if (puVar4 == param_1 + 6) break;
      puVar6 = *(undefined1 **)(puVar2 + 8);
    }
  }
  *(int *)(puVar2 + 0x10) = (int)lVar3;
  if ((int)param_1[8] < (int)lVar3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(n) <= (static_cast<int>(ranges_.size()))",
                  "external/com_github_google_re2/re2/regexp.cc",0x3ce,"GetCharClass");
  }
  *(uint *)(puVar2 + 4) = param_1[2];
  *puVar2 = ((param_1[1] ^ *param_1) & 0x3ffffff) == 0;
  return;
}



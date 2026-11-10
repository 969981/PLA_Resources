/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ecbc0; name: FUN_002ecbc0
 */


undefined8 FUN_002ecbc0(long param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0;
  if (param_1 != 0) {
    lVar4 = 0;
    do {
      iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
      iVar2 = tolower((uint)(byte)(&DAT_0395cf6f)[lVar4]);
      if (((lVar4 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
      lVar4 = lVar4 + 1;
    } while (iVar1 == iVar2);
    if (iVar1 != iVar2) {
      lVar4 = 0;
      while( true ) {
        iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
        iVar2 = tolower((uint)(byte)(&DAT_0390f9d5)[lVar4]);
        if ((lVar4 == -2) || (iVar2 == 0)) break;
        if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
      }
      if (iVar1 == iVar2) goto LAB_002ece98;
      lVar4 = 0;
      while( true ) {
        iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
        iVar2 = tolower((uint)(byte)(&DAT_038aa83a)[lVar4]);
        if ((lVar4 == -2) || (iVar2 == 0)) break;
        if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
      }
      if (iVar1 != iVar2) {
        lVar4 = 0;
        do {
          iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
          iVar2 = tolower((uint)(byte)(&DAT_038b2be7)[lVar4]);
          if (((lVar4 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
          lVar4 = lVar4 + 1;
        } while (iVar1 == iVar2);
        if (iVar1 == iVar2) goto LAB_002ece98;
        lVar4 = 0;
        while( true ) {
          iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
          iVar2 = tolower((uint)(byte)(&DAT_03924305)[lVar4]);
          if ((lVar4 == -2) || (iVar2 == 0)) break;
          if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
        }
        if (iVar1 != iVar2) {
          lVar4 = 0;
          while( true ) {
            iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
            iVar2 = tolower((uint)(byte)"false"[lVar4]);
            if ((lVar4 == -2) || (iVar2 == 0)) break;
            if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
          }
          if (iVar1 == iVar2) goto LAB_002ece98;
          lVar4 = 0;
          do {
            iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
            iVar2 = tolower((uint)(byte)(&DAT_038bde25)[lVar4]);
            if (((lVar4 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
            lVar4 = lVar4 + 1;
          } while (iVar1 == iVar2);
          if (iVar1 != iVar2) {
            lVar4 = 0;
            while( true ) {
              iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
              iVar2 = tolower((uint)(byte)(&DAT_03940192)[lVar4]);
              if ((lVar4 == -2) || (iVar2 == 0)) break;
              if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
            }
            if (iVar1 == iVar2) {
LAB_002ece98:
              *param_2 = 0;
              return 1;
            }
            lVar4 = 0;
            while( true ) {
              iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
              iVar2 = tolower((uint)(byte)(&DAT_038b32d5)[lVar4]);
              if ((lVar4 == -2) || (iVar2 == 0)) break;
              if ((iVar1 == 0) || (lVar4 = lVar4 + 1, iVar1 != iVar2)) break;
            }
            if (iVar1 != iVar2) {
              lVar4 = 0;
              do {
                iVar1 = tolower((uint)*(byte *)(param_1 + lVar4));
                iVar2 = tolower((uint)(byte)(&DAT_0390f335)[lVar4]);
                if (((lVar4 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
                lVar4 = lVar4 + 1;
              } while (iVar1 == iVar2);
              if (iVar1 != iVar2) {
                return 0;
              }
              goto LAB_002ece98;
            }
          }
        }
      }
    }
    uVar3 = 1;
    *param_2 = 1;
  }
  return uVar3;
}


